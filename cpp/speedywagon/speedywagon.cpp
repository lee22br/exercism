#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:
    bool connection_check(pillar_men_sensor* sensor) {
        if (sensor == nullptr) {
            return false;
        }
        return true;
    }

    int activity_counter(pillar_men_sensor* sensor_array, int capacity) {
        int sum = 0;
        if (!connection_check(sensor_array)) {
            return sum;
        }
        for (int i = 0; i < capacity; ++i) {
            sum += sensor_array[i].activity;
        }
        return sum;
    }

    bool alarm_control(pillar_men_sensor* sensor) {
        if (!connection_check(sensor)) {
            return false;
        }
        if (activity_counter(sensor, sensor->data.size()) > 0) {
            return true;
        }
        return false;
    }

    bool uv_alarm(pillar_men_sensor* sensor) {
        if (!connection_check(sensor)) {
            return false;
        }
        int value = uv_light_heuristic(&sensor->data);
        if (value > sensor->activity) {
            return true;
        }
        return false;
    }
    
    // Please don't change the interface of the uv_light_heuristic function
    int uv_light_heuristic(std::vector<int>* data_array) {
        double avg{};
        for (auto element : *data_array) {
            avg += element;
        }
        avg /= data_array->size();
        int uv_index{};
        for (auto element : *data_array) {
            if (element > avg) ++uv_index;
        }
        return uv_index;
    }


}  // namespace speedywagon
