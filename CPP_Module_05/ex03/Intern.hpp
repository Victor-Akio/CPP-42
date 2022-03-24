/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 00:37:20 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/24 02:05:43 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

/*	AROQUE E PADRÃO FACTORY
**	https://refactoring.guru/pt-br/design-patterns/factory-method
**	A implementação da função do estagiário visa a ideia de criação dinâmica de 
**	objetos, mantendo a organização e eficiência do programa.
*/
class Intern {
	private:
	protected:
	public:
		Intern(void);
		virtual ~Intern(void);
		Intern(Intern const &copy);
		Intern &operator=(Intern const &copy);
		Form	*makeForm(std::string formName, std::string target);
		class FormNotFoundException: public std::exception {
			virtual const char *what() const throw();
		};
};

#endif