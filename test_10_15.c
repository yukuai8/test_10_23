#include <stdio.h>

int main() {
    // �����������ٶ�
    const float g = 10.0; // m/s2
    // ����ʱ��
    const float t = 3.0;  // seconds

    // ��������ľ���
    float s = 0.5 * g * t * t;

    // ������
    printf("��ǰ%.1f��������Ĵ�ֱ����Ϊ: %.2f ��\n", t, s);

    return 0;
}
