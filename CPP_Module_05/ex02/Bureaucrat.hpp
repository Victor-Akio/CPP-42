/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 01:16:48 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/23 22:13:23 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"
class Bureaucrat;

# define HIGHEST_GRADE 1
# define LOWEST_GRADE 150

class Bureaucrat {
	private:
		std::string const	name;
		int					grade;
		Bureaucrat(void);
	protected:
	public:
		Bureaucrat(std::string const &_name, int _grade);
		virtual ~Bureaucrat(void);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat	&operator=(const Bureaucrat &copy);
		//	Getter das informações necessárias;
		std::string const	&getName(void) const;
		int					getGrade(void) const;
		//	exception classes
		class GradeTooHighException: public std::exception {
			virtual const char *what() const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char *what() const throw();
		};
		//	Operation classes
		void	increaseGrade(void);
		void	decreaseGrade(void);
		void	changeGrade(int	ranks);
		void	signForm(Form &form) const;
		void	executeForm(Form const &form) const;
};

//	override da <<
std::ostream	&operator<<(std::ostream &os, const Bureaucrat &copy);

#endif
