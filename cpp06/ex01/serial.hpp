//
// Created by jimin on 2023/01/10.
//

#ifndef CPP_SERIAL_HPP
#define CPP_SERIAL_HPP

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif //CPP_SERIAL_HPP
