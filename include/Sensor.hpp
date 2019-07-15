#ifndef SENSOR_H
#define SENSOR_H

#include <tuple>
#include <random>

// temperatura, umidade, luminosidade
class Sensor {
  // private:
    // static double lower_bound = 0, upper_bound = 1;

  public:
    std::tuple<double,double,double> getReadings();
}

#endif
