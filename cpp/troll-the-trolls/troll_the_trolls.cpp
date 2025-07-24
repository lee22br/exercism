namespace hellmath {

    // Task 1 - Define an `AccountStatus` enumeration to represent the four
    // account types: `troll`, `guest`, `user`, and `mod`.
    enum class AccountStatus {
        troll,
        guest,
        user,
        mod
    };

    // Task 1 - Define an `Action` enumeration to represent the three
    // permission types: `read`, `write`, and `remove`.
    enum class Action {
        read,
        write,
        remove
    };

    // Task 2 - Implement the `display_post` function, that gets two arguments
    // of `AccountStatus` and returns a `bool`. The first argument is the status of
    // the poster, the second one is the status of the viewer.
    bool display_post(AccountStatus poster, AccountStatus viewer) {
        if (AccountStatus::troll == poster && AccountStatus::troll != viewer)
            return false;
        else
            return true;
    }

    // Task 3 - Implement the `permission_check` function, that takes an
    // `Action` as a first argument and an `AccountStatus` to check against. It
    // should return a `bool`.
    bool permission_check(Action action, AccountStatus status){
        bool result = false;
        switch (action) {
            case Action::read:
                result = true;
                break;
            case Action::write:
                result = (status != AccountStatus::guest);
                break;
            case Action::remove:
                result = (status == AccountStatus::mod);
                break;
            default:
                result = false;
        }
        return result;
    }

// Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.
    bool valid_player_combination(AccountStatus player1, AccountStatus player2) {
        bool result = true;
        if (player1 == AccountStatus::guest or player2 == AccountStatus::guest) {
            result = false;
        } else if (player1 == AccountStatus::troll and player2 == AccountStatus::troll) {
            result = true;
        } else if (player1 == AccountStatus::troll or player2 == AccountStatus::troll) {
            result = false;
        }
        return result;
    }

// Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.
    bool has_priority(AccountStatus account1, AccountStatus account2) {
        return account1 > account2;
    }
}  // namespace hellmath