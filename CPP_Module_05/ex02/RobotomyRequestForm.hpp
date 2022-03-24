/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 19:00:16 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/23 21:13:58 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm: public Form {
	private:
		std::string		target;
		static std::string const		&name;
	protected:
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const &_target);
		virtual ~RobotomyRequestForm(void);
		RobotomyRequestForm(RobotomyRequestForm const &copy);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &copy);
		
		void		execute(Bureaucrat const &executor) const;
};

//	override da <<
std::ostream	&operator<<(std::ostream &os, const RobotomyRequestForm &obj);

#endif
