#pragma once
#include <string>

class Weather {
    public:
        Weather(const std::string& city); // constructor declaration
        void fetchData();
        void display();

    private:
        std::string _city;
        int _temperature;
        int _rain_perc;
};