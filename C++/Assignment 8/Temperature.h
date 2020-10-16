#ifndef TEMPERATURE_H
#define TEMPERATURE_H

class Temperature {
    public:
        static const int CELSIUS = 1;
        static const int FAHRENHEIT = 2;
        static const int KELVIN = 3;

        float t;

        void setTemp(float temp){
            t = temp;
        }

        float getCelsius() const{
            return (t - 32.0) * (.55555556);
        }

        float getKelvin() const{
            return ((t - 32.0) * (.55555556)) + 273.15;
        }

    private:
        float celsius;
};

#endif