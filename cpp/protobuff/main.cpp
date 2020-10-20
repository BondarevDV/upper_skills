#include "addressbook.pb.h"

int main(int /*argc*/, char */*argv*/[])
{
    // Создаем экземпляр класса адресной книги для сериализации
    tutorial::AddressBook src_book;
    {
        // Создаем и заполняем первую запись в адресной книге
        tutorial::Person * person = src_book.add_person();
        person->set_name("Alexey Knyazev");
        person->set_id(0);
        person->set_email("knzsoft@mail.ru");
        {
            tutorial::Person_PhoneNumber * pn = person->add_phones();
            pn->set_number("+7 927-220-35-67");
            pn->set_type(tutorial::Person_PhoneType_MOBILE);
        }
        {
            tutorial::Person_PhoneNumber * pn = person->add_phones();
            pn->set_number("+7 962-622-31-67");
            pn->set_type(tutorial::Person_PhoneType_MOBILE);
        }
    }
    {
        // Создаем и заполняем вторую запись в адресной книге
        tutorial::Person * person = src_book.add_person();
        person->set_name("Danilov Dmitry");
        person->set_id(1);
        {
            tutorial::Person_PhoneNumber * pn = person->add_phones();
            pn->set_number("8 (8452) 43-96-86");
            pn->set_type(tutorial::Person_PhoneType_HOME);

        }
    }

    std::string msg;
    src_book.SerializeToString(&msg);

    tutorial::AddressBook dst_book;
    dst_book.ParseFromString(msg);

    dst_book.PrintDebugString();

    return 0;
}
