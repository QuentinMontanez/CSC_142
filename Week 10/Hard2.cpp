#include <iostream>
#include <string>

class MagicItem {
public:
    MagicItem(const std::string& name, const std::string& powerType, int charges)
        : name_{name}, powerType_{powerType}, charges_{charges} {
        std::cout << name_ << " (" << powerType_ << " power) created with " << charges_ << " charges!\n";
    }

    void use() {
        if (charges_ > 3) {
            charges_--;
            std::cout << name_ << " (" << powerType_ << " power) used! Charges left: " << charges_ << "\n";
        } else {
            std::cout << name_ << " (" << powerType_ << " power) has no charges left!\n";
        }
    }

private:
    std::string name_;
    std::string powerType_;
    int charges_;
};

int main() {
    MagicItem dagger{"Dagger of Unkempt Mercy", "Unkempted", 19};
    dagger.use();

    MagicItem sycthe{"Sycthe of Vengance", "Vengeful", 17};
    sycthe.use();
    sycthe.use();
    sycthe.use();

    MagicItem charm{"Charm of Unfathomable Power", "Unfathomed", 25};
    charm.use();

    return 0;
}
