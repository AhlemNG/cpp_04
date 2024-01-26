/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:48:39 by anouri            #+#    #+#             */
/*   Updated: 2024/01/26 16:48:40 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(std::string const name);
        virtual~WrongAnimal();
        WrongAnimal(WrongAnimal const &other);
        WrongAnimal& operator=(WrongAnimal const &rhs);
        std::string const &getType() const;
    
        void makeSound() const;
};

#endif