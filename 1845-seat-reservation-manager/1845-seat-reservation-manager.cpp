class SeatManager {

private:
    int next;
    priority_queue<int, vector<int>, greater<int>> heap;

public:
    SeatManager(int n) {
        next = 1;
    }

    int reserve() {
        if (!heap.empty() && heap.top() < next) {
            int reservedSeat = heap.top();
            heap.pop();
            return reservedSeat;
        }

        next++;
        return next - 1;
    }

    void unreserve(int seatNumber) {
        heap.push(seatNumber);
    }
};