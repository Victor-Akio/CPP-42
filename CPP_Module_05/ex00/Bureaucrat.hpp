/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 01:16:48 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/18 06:42:59 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

# define HIGHEST_GRADE 1
# define LOWEST_GRADE 150

/*	Try CATCH
**	https://docs.microsoft.com/pt-br/cpp/cpp/try-throw-and-catch-statements-cpp?view=msvc-170
**	EXCEPTIONS
**	https://www.cplusplus.com/reference/exception/exception/
*/
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
};

//	override da <<
std::ostream	&operator<<(std::ostream &os, const Bureaucrat &copy);

#endif
