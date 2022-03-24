/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:00:22 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/23 21:44:13 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"

class PresidentialPardonForm: public Form {
	private:
		std::string		target;
		static std::string const		&name;
	protected:
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const &_target);
		virtual ~PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm const &copy);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &copy);
		
		void		execute(Bureaucrat const &executor) const;
};

//	override da <<
std::ostream	&operator<<(std::ostream &os, const PresidentialPardonForm &obj);

#endif
