#include <Sensor.hpp>

std::tuple<double,double,double> Sensor::getReadings() {
  //temperatura, umidade, luminosidade
  std::tuple<double,double,double> readings;
  double r_temperature, r_humidity, r_luminosity;

  std::tr1::uniform_real<double> unif(Sensor::lower_bound, Sensor::upper_bound);
  std::default_random_engine re;

  double r_temperature = unif(re);
  double r_humidity = unif(re);
  double r_luminosity = unif(re);
  
  return make_tuple(r_temperature, r_humidity, r_luminosity);
}
