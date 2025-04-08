#include <iostream>
#include <iterator>



void write_to(char *ptr, std::size_t len, const int index, char input)
{
    if(index < 0 || index > len - 1)
        std::cerr << "Invalid index at " << index << '\n';  
        ptr[index] = input;
}

void read_from(const char *ptr, std::size_t len, const int index)
{
    if(index < 0 || index > len - 1)
        std::cerr << "Invalid index at " << index << '\n';
    else
        std::cout << "ptr[" << index << "] = " << ptr[index] << '\n';
}

int main()
{
    char lower[] = "abc?e";
    auto lower_len = std::size(lower);  
    char upper[] = "ABC?E";
    auto upper_len = std::size(upper);

    write_to(lower, lower_len, 3, 'd');
    read_from(lower, lower_len, 3);

    write_to(upper, upper_len, 3, 'D');
    read_from(upper, upper_len, 3);


    std::cout << "lower: " << lower << '\n';
    std::cout << "upper: " << upper << '\n';
}
#include <iostream>


class Link
{
public:
    short m_operation_number;

    Link(const short on);
    void insert_after(Link* new_element);
    Link* insert_before(Link* new_element);

    void traverse_forward(Link* main_trooper) const;
    void traverse_backwards(Link* main_trooper) const;

    Link* get_next() const
    { return next; }

    Link* get_prev() const 
    { return prev; }

private:
    Link *next;
    Link *prev;
};

Link::Link(const short on)
    : m_operation_number{on},
      next{nullptr},
      prev{nullptr} { }

void Link::insert_after(Link* new_element)
{
    if (!new_element)  return;
    if (!this)         return;

    new_element->prev = this;
    
    if (this->next)
        this->next->prev = new_element;

    new_element->next = this->next;
    this->next = new_element;

}

Link* Link::insert_before(Link* new_element)
    {
        if (!new_element)  return this;
        if (!this)         return new_element;

        new_element->next = this;

        if (this->prev)
            this->prev->next = new_element;

        new_element->prev = this->prev;
        this->prev = new_element;

        return new_element;
    }

void Link::traverse_forward(Link* main_trooper) const
{
    if(!main_trooper) return;

        const Link* curr{main_trooper};
        std::cout << "{ ";
        while(curr) 
        {
            std::cout << curr->m_operation_number;
            if(curr = curr->get_next())
                std::cout << " <=> ";
        }
        std::cout << " }\n";
}

void Link::traverse_backwards(Link *main_trooper) const
{
    if(!main_trooper) return;

    const Link* tail{main_trooper};

    while(tail->get_next())
        tail = tail->get_next();

    std::cout << "{ ";
    while(tail)
    {
        std::cout << tail->m_operation_number;
        if(tail = tail->get_prev())
            std::cout << " <=> ";
    }
    std::cout << " }\n";






    
    main_trooper = main_trooper->insert_before(new Link{421});
    main_trooper = main_trooper->insert_before(new Link{500});
    main_trooper = main_trooper->insert_before(new Link{16});
    main_trooper = main_trooper->insert_before (new Link{348});

    main_trooper->insert_after (new Link{111});

    main_trooper->traverse_forward(main_trooper);
    main_trooper->traverse_backwards(main_trooper);

    return;

{
    #include <cstdio>


    auto original = 100;
    auto &original_ref = original;

    printf("Original: %d\n", original);
    printf("Reference: %d\n", original_ref);

    auto new_value = 200;
    original_ref = new_value;

    printf("Original: %d\n", original);
    printf("New Value: %d\n", new_value);
    printf("Reference: %d\n", original_ref);
}
 
}