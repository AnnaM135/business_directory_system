BUILD_DIR = build
SOURCE_DIR = src
TEST_DIR = test
CXXFLAGS = -g -Wall -Wextra -Wpedantic -Wunreachable-code -Wunreachable-code-loop-increment -Wunreachable-code-return
GTEST_LIB = -lgtest -lgtest_main -lpthread

all: $(BUILD_DIR) main run_tests

main: $(BUILD_DIR)/test.o $(BUILD_DIR)/main.o
	clang++ -o $(BUILD_DIR)/test $(CXXFLAGS) $(BUILD_DIR)/test.o $(BUILD_DIR)/main.o $(GTEST_LIB)

$(BUILD_DIR)/test.o: $(TEST_DIR)/test.cpp
		clang++ -c $(CXXFLAGS) $(TEST_DIR)/test.cpp -o $(BUILD_DIR)/test.o

$(BUILD_DIR)/main.o: $(SOURCE_DIR)/main.cpp
		clang++ -c $(CXXFLAGS) $(SOURCE_DIR)/main.cpp -o $(BUILD_DIR)/main.o

run_tests: $(BUILD_DIR)/test
	$(BUILD_DIR)/test

clean: 
		rm -f $(BUILD_DIR)/test $(BUILD_DIR)/*.o

.PHONY: all clean

