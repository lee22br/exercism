// eat_ghost returns a boolean value if Pac-Man is able to eat the ghost.
// The function should return true only if Pac-Man has a power pellet active
// and is touching a ghost.
bool can_eat_ghost(bool power_pellet_active, bool touching_ghost) {
    bool result = false;
    if (power_pellet_active == true){
        if (touching_ghost == false){
            result = true;
        }
    }
    return result;
}

// score returns a boolean value if Pac-Man scored.
// The function should return true if Pac-Man is touching a power pellet or a
// dot.
bool scored(bool touching_power_pellet, bool touching_dot) {
    bool result = false;
    if (touching_dot == true or touching_power_pellet == true){
        result = true;
    }
    return result;
}

// lost returns a boolean value if Pac-Man loses.
// The function should return true if Pac-Man is touching a ghost and
// does not have a power pellet active.
bool lost(bool power_pellet_active, bool touching_ghost) {
    bool result = false;
    if (!power_pellet_active){
        if (touching_ghost){
            result = true;
        }
    }
    return result;
}

// won returns a boolean value if Pac-Man wins.
// The function should return true if Pac-Man
// has eaten all of the dots and has not lost
bool won(bool has_eaten_all_dots, bool power_pellet_active,
         bool touching_ghost) {
    bool result = False
    if (has_eaten_all_dots){
        result = true;
        if (!power_pellet_active and touching_ghost){
            result = false;
        }
        if (power_pellet_active and touching_ghost){
            result = true;
        }
    }
    return result
}