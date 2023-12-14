#include "./helpers.cpp"
using namespace std;

int main() {
    int error_count = 0;

    #define ASSERT(x) { if (!x) { cout << "Assert true failed on line " << __LINE__ << endl; error_count++; } }
    #define ASSERT_F(x) { if (x) { cout << "Assert false failed on line " << __LINE__ << endl; error_count++; } }

    { // Test remove_prefix
        string str("hello");
        string rms("hel");
        remove_prefix(str, rms);
        bool test_remove_prefix = str == "lo";
        
        ASSERT(test_remove_prefix);
    }{ // remove_prefix shouldn't remove if not prefix
        string str("!hello");
        string rms("hel");
        remove_prefix(str, rms);
        bool test_remove_prefix = str == "!hello";

        ASSERT(test_remove_prefix);
    }

    { // Test remove_suffix
        string str("hello");
        string rms("lo");
        remove_suffix(str, rms);
        bool test_remove_prefix = str == "hel";

        ASSERT(test_remove_prefix);
    }{ // remove_suffix shouldn't remove if not suffix
        string str("hello!");
        string rms("lo");
        remove_suffix(str, rms);
        bool test_remove_prefix = str == "hello!";

        ASSERT(test_remove_prefix);
    }

    { // Test find_last
        string str("12300123");
        string find("123");
        size_t pos = find_last(str, find);
        bool test_find_last = pos == 5;

        ASSERT(test_find_last);
    }

    cout << "Finished tests with " << error_count << " errors.";
    return error_count;
}
