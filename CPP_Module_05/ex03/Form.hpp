/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 08:50:49 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/23 02:04:39 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Form;
class Bureaucrat;
#include "Bureaucrat.hpp"

class Form {
	private:
		std::string const	name;
		int const			signGrade;
		int const			execGrade;
		bool				isSigned;
	protected:
	public:
		Form(void);
		Form(std::string const &_name, int const _signGrade, int const _execGrade);
		virtual ~Form(void);
		Form(Form const &copy);
		Form &operator=(Form const &copy);
		//	Getter das informações necessárias;
		std::string const	&getName(void) const;
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;
		bool				getSigned(void) const;
		//	exception classes
		class GradeTooHighException: public std::exception {
			virtual const char *what() const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char *what() const throw();
		};
		class FormIsSignedException: public std::exception {
			virtual const char *what() const throw();
		};
		class FormIsNotSignedException: public std::exception {
			virtual const char *what() const throw();
		};
		//	Operation classes
		void				beSigned(Bureaucrat const &copy);
		virtual void		execute(Bureaucrat const &copy) const = 0;
};

//	override da <<
std::ostream	&operator<<(std::ostream &os, const Form &obj);

#endif
