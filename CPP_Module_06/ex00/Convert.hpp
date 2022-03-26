/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminomiy <vminomiy@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 00:34:58 by vminomiy          #+#    #+#             */
/*   Updated: 2022/03/26 02:07:21 by vminomiy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <cstring>
# include <cstdlib>
# include <climits>
# include <limits>

/*	CASTING - https://www.tutorialspoint.com/cplusplus/cpp_casting_operators.htm
**	
*/
class Convert {
	private:
	protected:
	public:
		Convert(void);
		~Convert(void);
		Convert(Convert const &copy);
		Convert	&operator=(Convert const &copy);
		void	conversor(std::string arg);
		void	convertChar(std::string arg);
		void	convertInt(std::string arg);
		void	convertFloat(std::string arg);
		void	convertDouble(std::string arg);
		class ImpossibleCharConversion: public std::exception {
			virtual const char *what() const throw();
		};
		class ImpossibleIntConversion: public std::exception {
			virtual const char *what() const throw();
		};
		class NanFloatConversion: public std::exception {
			virtual const char *what() const throw();
		};
		class NanDoubleConversion: public std::exception {
			virtual const char *what() const throw();
		};
};

#endif
