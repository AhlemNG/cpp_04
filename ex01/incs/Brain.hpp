/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 16:58:08 by anouri            #+#    #+#             */
/*   Updated: 2024/01/26 17:29:17 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAINL_HPP
#define BRAINL_HPP

#include <iostream>

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
        std::string getIdea(int index) const;
        
};

#endif
