#include <curl/curl.h>
#include <../include/weather.hpp>

// Weather::Weather(const std::string& city) : _city(city) {}; // constr def using init list

Weather::Weather(const std::string& city) { // explicit constructor definition 
    this->_city = city;
}

void Weather::fetchData() {

}