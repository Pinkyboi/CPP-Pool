/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenaiss <abenaiss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 19:50:18 by abenaiss          #+#    #+#             */
/*   Updated: 2021/07/24 03:03:22 by abenaiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERY_CREATION_FORM__
#define __SHRUBBERY_CREATION_FORM__

#include "Form.hpp"
#include <iostream>
#include <string>
#include <fstream>

class ShrubberyCreationForm : public Form
{
    private:
        static const std::string    _ascii_tree;
        static const std::string    _path;
        std::string                 _target;
    public:
                                    ShrubberyCreationForm(void);
                                    ShrubberyCreationForm(std::string target);
                                    ShrubberyCreationForm(const ShrubberyCreationForm& shrubberyInstance);
                                    ~ShrubberyCreationForm();
        void                        createTree(void) const;
        virtual void                action(void) const;
        ShrubberyCreationForm&      operator=(const ShrubberyCreationForm &shrubberyInstance);        
};

#endif