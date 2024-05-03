// My First Solution
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> storage;

        for (int i = 1; i <= n; i++)
        {
            if(i % 3 == 0 && i % 5 == 0)
               storage.push_back("FizzBuzz");
            else if(i % 3 == 0)
                storage.push_back("Fizz");
            else if(i % 5 == 0)
                storage.push_back("Buzz");
            else
                storage.push_back(to_string(i));
        }
        return storage;
    }
};

// My Remastered Solution
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> storage;

        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0)
                storage.push_back(i % 5 == 0 ? "FizzBuzz" : "Fizz");
            else
                storage.push_back(i % 5 == 0 ? "Buzz" : to_string(i));
        }
        return storage;
    }
};
