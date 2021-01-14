/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmuller <rmuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:06:50 by rmuller           #+#    #+#             */
/*   Updated: 2020/12/04 12:29:38 by rmuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void	check_ft_strlen(void)
{
	printf("CHECK FT_STRLEN\n");
	printf("%-20s: %zu\n", "libc", strlen(""));
	printf("%-20s: %zu\n", "libasm", ft_strlen(""));
	
	printf("%-20s: %zu\n", "libc", strlen("cou\0cou"));
	printf("%-20s: %zu\n", "libasm", ft_strlen("cou\0cou"));

	printf("%-20s: %zu\n", "libc", strlen("coucou"));
	printf("%-20s: %zu\n", "libasm", ft_strlen("coucou"));
}

void	check_ft_write(void)
{
	printf("\nCHECK FT_WRITE\n");
	printf("errno: %d\n", errno);
	ssize_t ret = write(1, "salut\n", 7); 
	printf("%-20s: %zu\n", "libc", ret);
	ret = ft_write(1, "salut\n", 7);
	printf("%-20s: %zu\n\n", "libasm", ret);
	
	ret = write(1, "salut\n", 8); 
	printf("%-20s: %zu\n", "libc", ret);
	ret = ft_write(1, "salut\n", 8);
	printf("%-20s: %zu\n\n", "libasm", ret);

	ret = write(1, "salut\n", 1); 
	printf("%-20s: %zu\n", "libc", ret);
	ret = ft_write(1, "salut\n", 1);
	printf("%-20s: %zu\n\n", "libasm", ret);

	ret = write(1, "sal\0ut\n", 1); 
	printf("%-20s: %zu\n", "libc", ret);
	ret = ft_write(1, "sal\0ut\n", 1);
	printf("%-20s: %zu\n\n", "libasm", ret);

	ret = write(1, NULL, 1); 
	printf("%-20s: %zu\n", "libc", ret);
	ret = ft_write(1, NULL, 1);
	printf("%-20s: %zu\n\n", "libasm", ret);

	ret = write(-1, "bonjour", 7);; 
	printf("%-20s: %zu\n", "libc", ret);
	ret = ft_write(-1, "bonjour", 7);;
	printf("%-20s: %zu\n\n", "libasm", ret);


}

void	check_ft_strcmp(void){
	printf("\nCHECK FT_STRCMP\n");
	printf("%-20s: %d\n", "libc", strcmp("z", "h"));
	printf("%-20s: %d\n", "libasm", ft_strcmp("z", "h"));

	printf("%-20s: %d\n", "libc", strcmp("salut", "sblut"));
	printf("%-20s: %d\n", "libasm", ft_strcmp("salut", "sblut"));

	printf("%-20s: %d\n", "libc", strcmp("coucou", "coucou"));
	printf("%-20s: %d\n", "libasm", ft_strcmp("coucou", "coucou"));

	// printf("%-20s: %d\n", "libc", strcmp(NULL, NULL));
	// printf("%-20s: %d\n", "libasm", ft_strcmp(NULL, NULL));
}

void check_ft_strcpy() {
	char chaine[255];
	char chaine1[255];


	printf("\nCHECK FT_STRCPY\n");

	printf("%-20s: %-10s |%s\n", "libc", chaine, strcpy(chaine, "h"));
	printf("%-20s: %-10s |%s\n", "libasm", chaine, ft_strcpy(chaine1, "h"));

	printf("%-20s: %-10s |%s\n", "libc", chaine, strcpy(chaine, "coucou"));
	printf("%-20s: %-10s |%s\n", "libc", chaine, ft_strcpy(chaine, "coucou"));

	printf("%-20s: %-10s |%s\n", "libc", chaine, strcpy(chaine, "bonj\0our"));
	printf("%-20s: %-10s |%s\n", "libc", chaine, ft_strcpy(chaine, "bonj\0our"));

	printf("%-20s: %-10s |%s\n", "libc", chaine, strcpy(chaine, "1\0"));
	printf("%-20s: %-10s |%s\n", "libc", chaine, ft_strcpy(chaine, "1\0"));

	printf("%-20s: %-10s |%s\n", "libc", chaine, strcpy(chaine, "qwertyuiopasdfghjklzxcvbnm"));
	printf("%-20s: %-10s |%s\n", "libc", chaine, ft_strcpy(chaine, "qwertyuiopasdfghjklzxcvbnm"));
}

void check_ft_read() {
	int ret;
	char buff[256];


	printf("\nCHECK FT_READ\n");
	ret = ft_read(2, buff, 256);
	printf("%-20s: %-10d |%s\n", "libasm", ret, buff);

	ret = read(2, buff, 256);
	printf("%-20s: %-10d |%s\n", "libc", ret, buff);
}

void check_ft_strdup() {
	printf("CHECK FT_STRDUP\n");

	printf("%-20s: %s\n", "libc", strdup("coucou8"));
	printf("%-20s: %s\n", "libasm", ft_strdup("coucou8"));
	printf("%-20s: %s\n", "libc", strdup(""));
	printf("%-20s: %s\n", "libasm", ft_strdup(""));
	printf("%-20s: %s\n", "libc", strdup("couc\0ou"));
	printf("%-20s: %s\n", "libasm", ft_strdup("couc\0ou"));
}

int		main(void)
{
	check_ft_strlen();
	check_ft_write();
	check_ft_strcmp();
	check_ft_strcpy();
	check_ft_read();
	check_ft_strdup();
	return (0);
}
