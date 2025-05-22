#include <stdio.h>
#include <gtest/gtest.h>
#include "../src/headers/Education.h"

TEST(EducationTest, EnrollStudentsIncreasesCount) {
    Education edu;
    edu.numberOfStudents = 100;

    edu.enrollStudents(50);

    EXPECT_EQ(edu.numberOfStudents, 150);
}

TEST(EducationTest, AverageDonationPerStudentZeroStudents) {
    Education edu;
    edu.donationIncome = 100000;
    edu.numberOfStudents = 0;

    EXPECT_EQ(edu.averageDonationPerStudent(), 0.0);
}

TEST(EducationTest, AverageDonationPerStudentCorrect) {
    Education edu;
    edu.donationIncome = 100000;
    edu.numberOfStudents = 50;

    EXPECT_EQ(edu.averageDonationPerStudent(), 2000.0);
}