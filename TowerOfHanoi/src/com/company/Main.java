package com.company;
import java.util.Stack;

public class Main {

    public static void main(String[] args) {
        /* a simple run of the problem */
        Stack<Integer> A = new Stack<>();
        Stack<Integer> B = new Stack<>();
        Stack<Integer> C = new Stack<>();

        loadTower(A, 3);
        moveTower(3, A, C, B);

        assert A.size() == 0;
        assert B.size() == 0;
        assert C.size() == 3;
    }

    public static void loadTower(Stack<Integer> tower, int numberOfDisks) {
        for (int i = numberOfDisks; i > 0; i--) {
            tower.push(i);
        }
    }

    public static void moveDisk(Stack<Integer> source, Stack<Integer> destination) {
        destination.push(source.pop());
    }

    public static void moveTower(int numberOfDisks, Stack<Integer> source, Stack<Integer> destination, Stack<Integer> spare) {
        if (numberOfDisks == 0) {
            return;
        } else if (numberOfDisks == 1) {
            moveDisk(source, destination);
        } else {
            moveTower(numberOfDisks-1, source, spare, destination);
            moveDisk(source, destination);
            moveTower(numberOfDisks-1, spare, destination, source);
        }
    }
}
