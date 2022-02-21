/*
Runtime: 52 ms, faster than 79.55% of C++ online submissions for Design Parking System.
Memory Usage: 33 MB, less than 92.28% of C++ online submissions for Design Parking System.
*/
class ParkingSystem {
public:
    int big,medium,small;
    ParkingSystem(int big, int medium, int small) {
        this-> big = big;
        this-> medium = medium;
        this-> small = small;
    }
    
    bool addCar(int carType) {
        switch(carType){
            case 1:
                if(big>0) {
                    big-=1;
                    return 1;
                }
                return 0;
            case 2:
                if(medium>0) {
                    medium-=1;
                    return 1;
                }
                return 0;
            case 3:
                if(small>0) {
                    small-=1;
                    return 1;
                }
                return 0;
            default:
                return 0;
        }
        
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */