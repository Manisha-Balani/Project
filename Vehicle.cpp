#include<iostream>
using namespace std;

enum fuel_type { petrol, diesel };
enum wheel_type { alloy, spokes };
enum cooling_type { air, liquid, oil };
enum model_type_Audi { Audi_etron_GT, Audi_RS_etron_GT, Audi_etron };
enum model_type_ford { ford_021C, ford_24 };
enum make_type_bajaj { platina110, dominar250, pulsarN250 };
enum make_type_Tvs { apacheRR, apacheRTR };

class Vehicle {
    int mileage;
    int price;
public:
    Vehicle(int m, int p) : mileage(m), price(p) {}
};

class Car : public Vehicle {
    int cost;
    int warranty;
    int seating_capacity;
    fuel_type type;  // Changed from enum fuel type to fuel_type
public:
    Car(int m, int p, int c, int w, int s, fuel_type f) : Vehicle(m, p), cost(c), warranty(w), seating_capacity(s), type(f) {}
};

class Bike : public Vehicle {
    int cylinders;
    int number_of_gears;
    cooling_type c_type;
    fuel_type f_type;
    wheel_type w_type;
    int full_tank_size;
public:
    Bike(int m, int p, int cy, int ng, cooling_type ct, fuel_type ft, wheel_type wt, int fs)
        : Vehicle(m, p), cylinders(cy), number_of_gears(ng), c_type(ct), f_type(ft), w_type(wt), full_tank_size(fs) {}
};

class Audi : public Car {
    model_type_Audi ma_type;
public:
    Audi(int m, int p, int c, int w, int s, fuel_type f, model_type_Audi ma) : Car(m, p, c, w, s, f), ma_type(ma) {}
};

class Ford : public Car {
    model_type_ford mf_type;
public:
    Ford(int m, int p, int c, int w, int s, fuel_type f, model_type_ford mf) : Car(m, p, c, w, s, f), mf_type(mf) {}
};

class Bajaj : public Bike {
    make_type_bajaj mk_type;
public:
    Bajaj(int m, int p, int cy, int ng, cooling_type ct, fuel_type ft, wheel_type wt, int fs, make_type_bajaj mk)
        : Bike(m, p, cy, ng, ct, ft, wt, fs), mk_type(mk) {}
};

class Tvs : public Bike {
    make_type_Tvs mkt_type;
public:
    Tvs(int m, int p, int cy, int ng, cooling_type ct, fuel_type ft, wheel_type wt, int fs, make_type_Tvs mk)
        : Bike(m, p, cy, ng, ct, ft, wt, fs), mkt_type(mk) {}
};

int main() {
    Audi a{ 10, 100000, 50000, 2, 5, petrol, Audi_etron_GT };
    return 0;
}

