#include <stdio.h>

int main(){
int N;
int studentId, score, totalClasses, absentClasses;
float attendancePercent;
int passCount = 0;
int failCount = 0;

if(scanf("%d", &N) != 1){
    return 1;
}

for (int i = 0; i < N; i++)
{
    if (scanf("%d %d %d %d", &studentId, &score, &totalClasses, &absentClasses) != 4){
        break;
    }
    if (totalClasses > 0){
        attendancePercent = ((float)(totalClasses - absentClasses) / totalClasses) * 100.0;
    } else {
        attendancePercent = 0.0;
    }

    if (score >= 50 && attendancePercent >= 75.0){
        printf("Student %d: PASS\n", studentId);
        passCount++;
    } else {
        failCount++;
        int lowScore = (score < 50);
        int lowAttendance = (attendancePercent < 75.0);

        printf("Student %d: FAIL - ",studentId);

        if (lowScore && lowAttendance){
            printf("Both Score and Attendance\n");
        } else if (lowScore){
            printf("Low Score\n");
        } else if (lowAttendance) {
            printf("Low Attendance (%.2f%%)\n", attendancePercent);
        }
    }
}
printf("--- Summary ---\n");
printf("Total PASS: %d\n", passCount);
printf("Total FAIL: %d\n", failCount);
return 0;
}
