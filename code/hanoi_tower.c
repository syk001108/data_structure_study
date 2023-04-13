#include <stdio.h>
// 하노이 타워 알고리즘 함수
// start_pillar->시작 기둥, goal_pillar->목적지 기둥, acc_pillar->보조 기둥 
void hanoi_tower(int n, char start_pillar, char goal_pillar, char acc_pillar) { 
    if (n == 1) { // 옮겨야 할 원반이 하나일 때
        printf("Move disk 1 from %c to %c\n", start_pillar, goal_pillar);
        return;
    }
    // n-1 개의 작은 원반들을 acc_pillar 기둥으로 옮김
    hanoi_tower(n-1, start_pillar, acc_pillar, goal_pillar);
    // 가장 큰 원반을 goal_pillar 기둥으로 옮김
    printf("Move disk %d from %c to %c\n", n, start_pillar, goal_pillar);
    // acc_pillar 기둥에 있는 작은 원반들을 goal_pillar 기둥으로 옮김
    hanoi_tower(n-1, acc_pillar, goal_pillar, start_pillar);
}

int main() {
    int n = 3; // 원반의 개수
    hanoi_tower(n, 'A', 'C', 'B'); // A 기둥에서 C 기둥으로 원반을 옮기기 위해 B 기둥을 사용
    return 0;
}
