#include <DateTime.h>


// Конструктор по умолчанию
DateTime::DateTime()
{
    time_t current = std::time(NULL); // Текущая дата в секундах
    tm* tm_current = std::localtime(&current); // Конструируем временный tm объект
    time = new tm(*tm_current); // Выделяем динамическую память и инициализируем структуру
}

// Конструктор с параметрами
DateTime::DateTime(unsigned day, unsigned month, unsigned year)
{
    time = new tm();
    time -> tm_year = year - 1900; // [0...]
    time -> tm_mday = day; // [1...31]
    time -> tm_mon = month - 1; // [0...11]
    // Заполняем оставшиеся поля, используя доступную информацию
    mktime(time);
}

// Конструктор копирования
DateTime::DateTime(const DateTime & copy)
{
    time = new tm(*copy.time); // Копируем значения
}

// Деструктор
DateTime::~DateTime()
{
    delete time;
}

// Конструирование даты в виде строки
std::string DateTime::constructDate()
{
    std::string ans = (time->tm_mday < 10 ? "0" : ""); // Учитываем ведущий 0 в числах до 10
    ans = ans + std::to_string(time->tm_mday) + " " + months[time->tm_mon]
            + " " + std::to_string(time->tm_year + 1900)+ ", " + days[time->tm_wday]; // "Склеиваем" строку
    return ans;
}

// Получение текущей даты
std::string DateTime::getToday()
{
    return constructDate();
}

// Получение даты в будущем
DateTime DateTime::getFuture(unsigned int N)
{
    time_t future = mktime(time) + N*24*60*60; // Просчитываем сдвиг в секундах
    DateTime tmp; // Создаем временный объект
    tm* tm_future = std::localtime(&future);
    // Освобождаем ресурс вручную
    delete tmp.time;
    // Заново захватываем и инициализируем необходимыми данными
    tmp.time = new tm(*tm_future);
    return tmp;
}

// Получение даты в прошлом
DateTime DateTime::getPast(unsigned int N)
{
    time_t past = mktime(time) - N*24*60*60;
    DateTime tmp;
    tm* tm_past = std::localtime(&past);
    // Освобождаем ресурс вручную
    delete tmp.time;
    // Заново захватываем и инициализируем необходимыми данными
    tmp.time = new tm(*tm_past);
    return tmp;
}

// Получаем завтрашний и вчерашний дни
std::string DateTime::getTomorrow()
{
    return getFuture(1).constructDate();
}

std::string DateTime::getYesterday()
{
    return getPast(1).constructDate();
}

// Расчет разницы между двумя датами
int DateTime::getDifference(DateTime & date)
{
    int difference = abs((int)(mktime(time) - mktime(date.time)));
    return difference/(24*60*60);
}