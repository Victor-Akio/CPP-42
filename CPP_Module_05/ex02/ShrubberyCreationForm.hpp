/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:01:11 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/23 01:21:37 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm: public Form {
	private:
		std::string		target;
		static std::string const		&name;
	protected:
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string const &_target);
		virtual ~ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &copy);
		void		execute(Bureaucrat const &copy) const;
		class InvalidFileException: public std::exception {
			virtual const char *what() const throw();
		};
};

//	override da <<
std::ostream	&operator<<(std::ostream &os, const ShrubberyCreationForm &obj);

#endif
