/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:09:32 by anouri            #+#    #+#             */
/*   Updated: 2024/01/26 18:09:33 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAINL_HPP
#define BRAINL_HPP

#include <iostream>
#include <string>
class Brain
{
    protected:
        std::string  _ideas[100];
    public:
        Brain(); // default constructor
        ~Brain(); // destructor
        Brain(Brain const &src); //copy constructor
        Brain &operator=(Brain const &rhs); // copy assignation operator

        void setIdea(std::string idea, int index);
        std::string  getIdea(int index) const;
        
};

#endif
