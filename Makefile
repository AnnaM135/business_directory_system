BUILD_DIR = build
SOURCE_DIR = src
TEST_DIR = test
CXXFLAGS = -g -Wall -Wextra -Wpedantic -Wunreachable-code -Wunreachable-code-loop-increment -Wunreachable-code-return
GTEST_LIB = -lgtest -lgtest_main -lpthread

all: $(BUILD_DIR) main run_tests

main: $(BUILD_DIR)/test.o $(BUILD_DIR)/main.o $(BUILD_DIR)/Organization.o $(BUILD_DIR)/Foundation.o $(BUILD_DIR)/Ngo.o $(BUILD_DIR)/LLC.o $(BUILD_DIR)/JSC.o
	clang++ -o $(BUILD_DIR)/test $(CXXFLAGS) $(BUILD_DIR)/test.o $(BUILD_DIR)/main.o $(BUILD_DIR)/Organization.o $(BUILD_DIR)/Foundation.o $(BUILD_DIR)/Ngo.o $(BUILD_DIR)/LLC.o $(BUILD_DIR)/JSC.o $(GTEST_LIB)

$(BUILD_DIR)/test.o: $(TEST_DIR)/test.cpp
	clang++ -c $(CXXFLAGS) $(TEST_DIR)/test.cpp -o $(BUILD_DIR)/test.o

$(BUILD_DIR)/main.o: $(SOURCE_DIR)/main.cpp
	clang++ -c $(CXXFLAGS) $(SOURCE_DIR)/main.cpp -o $(BUILD_DIR)/main.o

$(BUILD_DIR)/Organization.o: $(SOURCE_DIR)/organizations/Organization.cpp
	clang++ -c $(CXXFLAGS) $(SOURCE_DIR)/organizations/Organization.cpp -o $(BUILD_DIR)/Organization.o

$(BUILD_DIR)/Foundation.o: $(SOURCE_DIR)/organizations/Foundation.cpp
	clang++ -c $(CXXFLAGS) $(SOURCE_DIR)/organizations/Foundation.cpp -o $(BUILD_DIR)/Foundation.o

$(BUILD_DIR)/Ngo.o: $(SOURCE_DIR)/organizations/Ngo.cpp
	clang++ -c $(CXXFLAGS) $(SOURCE_DIR)/organizations/Ngo.cpp -o $(BUILD_DIR)/Ngo.o

$(BUILD_DIR)/LLC.o: $(SOURCE_DIR)/organizations/LLC.cpp
	clang++ -c $(CXXFLAGS) $(SOURCE_DIR)/organizations/LLC.cpp -o $(BUILD_DIR)/LLC.o

$(BUILD_DIR)/JSC.o: $(SOURCE_DIR)/organizations/JSC.cpp
	clang++ -c $(CXXFLAGS) $(SOURCE_DIR)/organizations/JSC.cpp -o $(BUILD_DIR)/JSC.o

run_tests: $(BUILD_DIR)/test
	$(BUILD_DIR)/test

clean: 
	rm -f $(BUILD_DIR)/test $(BUILD_DIR)/*.o

.PHONY: all clean
