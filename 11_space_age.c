#include "11_space_age.h"

float age(planet_t planet, int64_t seconds) {
    if (planet < 0 || planet > 7) {
        return -1;
    }

    static const double orbital_periods[] = {
        0.2408467, 
        0.61519726,
        1.0,
        1.8808158, 
        11.862615, 
        29.447498, 
        84.016846, 
        164.79132
    };

    static const double EARTH_YEAR_SECONDS = 31557600.0;
    
    return seconds / (EARTH_YEAR_SECONDS * orbital_periods[planet]);
}