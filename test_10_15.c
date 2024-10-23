#include <stdio.h>

int main() {
    // 定义重力加速度
    const float g = 10.0; // m/s2
    // 定义时间
    const float t = 3.0;  // seconds

    // 计算下落的距离
    float s = 0.5 * g * t * t;

    // 输出结果
    printf("在前%.1f秒内下落的垂直距离为: %.2f 米\n", t, s);

    return 0;
}
