/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 08:50:49 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/22 17:11:33 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Form;
class Bureaucrat;
#include "Bureaucrat.hpp"

class Form {
	private:
		Form(void);
		std::string const	name;
		int const			signGrade;
		int const			execGrade;
		bool				isSigned;
	protected:
	public:
		Form(std::string const &_name, int const _signGrade, int const _execGrade);
		virtual ~Form(void);
		Form(Form const &copy);
		Form &operator=(Form const &copy);
		//	Getter das informações necessárias;
		std::string const	&getName(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;
		//	exception classes
		class GradeTooHighException: public std::exception {
			virtual const char *what() const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char *what() const throw();
		};
		class FormIsSIgnedException: public std::exception {
			virtual const char *what() const throw();
		};
		//	Operation classes
		bool	getSigned(void) const;
		void	beSigned(Bureaucrat const &copy);
};

//	override da <<
std::ostream	&operator<<(std::ostream &os, const Form &obj);

#endif
