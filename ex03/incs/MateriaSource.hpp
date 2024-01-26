/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:11:13 by anouri            #+#    #+#             */
/*   Updated: 2024/01/26 18:11:14 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: virtual public IMateriaSource
{
    private:
        AMateria *_learntMateria[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(MateriaSource const& src);
        MateriaSource& operator=(MateriaSource const& rhs);
        
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const& type);
};

#endif