class MovieRentingSystem {
public:
    map<pair<int, int>, int> price; 
    unordered_map<int, set<pair<int, int>>> unrented;
    set<tuple<int, int, int>> rented;
    MovieRentingSystem(int n, vector<vector<int>>& entries) {
        for (auto &e : entries) {
            int shop = e[0], movie = e[1], p = e[2];
            price[{shop, movie}] = p; 
            unrented[movie].emplace(p, shop);
        }
    }
    vector<int> search(int movie) {
        auto &s = unrented[movie];
        vector<int> ans;
        int i = 0;
        for (auto it = s.begin(); i < 5 && it != s.end(); ++it, ++i)
            ans.push_back(it->second);
        return ans;
    }
    void rent(int shop, int movie) {
        int p = price[{shop, movie}];
        unrented[movie].erase({p, shop});
        rented.emplace(p, shop, movie);
    }
    void drop(int shop, int movie) {
        int p = price[{shop, movie}];
        rented.erase({p, shop, movie});
        unrented[movie].emplace(p, shop);
    }
    vector<vector<int>> report() {
        vector<vector<int>> ans;
        int i = 0;
        for (auto it = rented.begin(); it != rented.end() && i < 5; ++i, ++it) {
            auto [p, s, m] = *it;
            ans.push_back({s, m});
        }
        return ans;
    }
};

/**
 * Your MovieRentingSystem object will be instantiated and called as such:
 * MovieRentingSystem* obj = new MovieRentingSystem(n, entries);
 * vector<int> param_1 = obj->search(movie);
 * obj->rent(shop,movie);
 * obj->drop(shop,movie);
 * vector<vector<int>> param_4 = obj->report();
 */