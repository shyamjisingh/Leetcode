class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        // Map to store reserved seats for each specific row
        unordered_map<int, unordered_set<int>> reserved;

        // Populate the map
        for (auto &seat : reservedSeats) {
            reserved[seat[0]].insert(seat[1]);
        }

        // Start by assuming all rows are empty (each holds 2 families)
        int ans = 2 * n;

        // Process only the rows that have reservations
        for (auto &[row, seats] : reserved) {
            // Initially subtract the 2 families we assumed for this row
            ans -= 2;

            // Check Left block (Seats 2 to 5)
            bool left = true;
            for (int s = 2; s <= 5; s++) {
                if (seats.count(s)) {
                    left = false;
                    break;
                }
            }

            // Check Middle block (Seats 4 to 7)
            bool middle = true;
            for (int s = 4; s <= 7; s++) {
                if (seats.count(s)) {
                    middle = false;
                    break;
                }
            }

            // Check Right block (Seats 6 to 9)
            bool right = true;
            for (int s = 6; s <= 9; s++) {
                if (seats.count(s)) {
                    right = false;
                    break;
                }
            }

            // Add back the families based on which blocks survived
            if (left && right) {
                ans += 2;
            } else if (left || middle || right) {
                ans += 1;
            }
        }

        return ans;
    }
};