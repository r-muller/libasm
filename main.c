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
	
	printf("%-20s: %zu\n", "libc", strlen("On the other hand, we denounce with righteous indignation and dislike men who are so beguiled and demoralized by the charms of pleasure of the moment, so blinded by desire, that they cannot foresee the pain and trouble that are bound to ensue; and equal blame belongs to those who fail in their duty through weakness of will, which is the same as saying through shrinking from toil and pain. These cases are perfectly simple and easy to distinguish. In a free hour, when our power of choice is untrammelled and when nothing prevents our being able to do what we like best, every pleasure is to be welcomed and every pain avoided. But in certain circumstances and owing to the claims of duty or the obligations of business it will frequently occur that pleasures have to be repudiated and annoyances accepted. The wise man therefore always holds in these matters to this principle of selection: he rejects pleasures to secure other greater pleasures, or else he endures pains to avoid worse pains."));
	printf("%-20s: %zu\n", "libasm", ft_strlen("On the other hand, we denounce with righteous indignation and dislike men who are so beguiled and demoralized by the charms of pleasure of the moment, so blinded by desire, that they cannot foresee the pain and trouble that are bound to ensue; and equal blame belongs to those who fail in their duty through weakness of will, which is the same as saying through shrinking from toil and pain. These cases are perfectly simple and easy to distinguish. In a free hour, when our power of choice is untrammelled and when nothing prevents our being able to do what we like best, every pleasure is to be welcomed and every pain avoided. But in certain circumstances and owing to the claims of duty or the obligations of business it will frequently occur that pleasures have to be repudiated and annoyances accepted. The wise man therefore always holds in these matters to this principle of selection: he rejects pleasures to secure other greater pleasures, or else he endures pains to avoid worse pains."));

}

void check_ft_strcpy() {
	char chaine[1000];
	char chaine1[1000];


	printf("\nCHECK FT_STRCPY\n");

	printf("%-20s: %-10s |%s\n", "libc", chaine, strcpy(chaine, ""));
	printf("%-20s: %-10s |%s\n", "libasm", chaine, ft_strcpy(chaine1, ""));

	printf("%-20s: %-10s |%s\n", "libc", chaine, strcpy(chaine, "On the other hand, we denounce with righteous indignation and dislike men who are so beguiled and demoralized by the charms of pleasure of the moment, so blinded by desire, that they cannot foresee the pain and trouble that are bound to ensue; and equal blame belongs to those who fail in their duty through weakness of will, which is the same as saying through shrinking from toil and pain. These cases are perfectly simple and easy to distinguish. In a free hour, when our power of choice is untrammelled and when nothing prevents our being able to do what we like best, every pleasure is to be welcomed and every pain avoided. But in certain circumstances and owing to the claims of duty or the obligations of business it will frequently occur that pleasures have to be repudiated and annoyances accepted. The wise man therefore always holds in these matters to this principle of selection: he rejects pleasures to secure other greater pleasures, or else he endures pains to avoid worse pains."));
	printf("%-20s: %-10s |%s\n", "libc", chaine, ft_strcpy(chaine, "On the other hand, we denounce with righteous indignation and dislike men who are so beguiled and demoralized by the charms of pleasure of the moment, so blinded by desire, that they cannot foresee the pain and trouble that are bound to ensue; and equal blame belongs to those who fail in their duty through weakness of will, which is the same as saying through shrinking from toil and pain. These cases are perfectly simple and easy to distinguish. In a free hour, when our power of choice is untrammelled and when nothing prevents our being able to do what we like best, every pleasure is to be welcomed and every pain avoided. But in certain circumstances and owing to the claims of duty or the obligations of business it will frequently occur that pleasures have to be repudiated and annoyances accepted. The wise man therefore always holds in these matters to this principle of selection: he rejects pleasures to secure other greater pleasures, or else he endures pains to avoid worse pains."));

	printf("%-20s: %-10s |%s\n", "libc", chaine, strcpy(chaine, "bonj\0our"));
	printf("%-20s: %-10s |%s\n", "libc", chaine, ft_strcpy(chaine, "bonj\0our"));

	printf("%-20s: %-10s |%s\n", "libc", chaine, strcpy(chaine, "1\0"));
	printf("%-20s: %-10s |%s\n", "libc", chaine, ft_strcpy(chaine, "1\0"));
}

void	check_ft_strcmp(void){
	printf("\nCHECK FT_STRCMP\n");
	printf("%-20s: %d\n", "libc", strcmp("", ""));
	printf("%-20s: %d\n", "libasm", ft_strcmp("", ""));

	printf("%-20s: %d\n", "libc", strcmp("", "salut"));
	printf("%-20s: %d\n", "libasm", ft_strcmp("", "salut"));

	printf("%-20s: %d\n", "libc", strcmp("coucou", ""));
	printf("%-20s: %d\n", "libasm", ft_strcmp("coucou", ""));

	printf("%-20s: %d\n", "libc", strcmp("coucou", "caucau"));
	printf("%-20s: %d\n", "libasm", ft_strcmp("coucou", "caucau"));

	printf("%-20s: %d\n", "libc", strcmp("caucau", "coucou"));
	printf("%-20s: %d\n", "libasm", ft_strcmp("caucau", "coucou"));

	printf("%-20s: %d\n", "libc", strcmp("coucou", "coucou"));
	printf("%-20s: %d\n", "libasm", ft_strcmp("coucou", "coucou"));
}

void	check_ft_write(void)
{
	char *chaine = "Lorem ipsum dolor sit amet, consectetur adipiscingelit. Sed in malesuada purus. Etiam a scelerisque massa. Ut non euismod elit. Aliquambibendum dolor mi, id fringilla tellus pulvinar eu. Fusce vel fermentum sem. Crasvolutpat, eros eget rhoncus rhoncus, diam augue egestas dolor, vitae rutrum nisifelis sed purus. Mauris magna ex, mollis non suscipit eu, lacinia ac turpis. Phasellusac tortor et lectus fermentum lobortis eu at mauris. Vestibulum sit amet posueretortor, sit amet consequat amet.";
	printf("\nCHECK FT_WRITE : \t");
	printf("errno: %d\n", errno);
	
	printf("FD:0 / CHAINE / strlen(CHAINE)\n");
	ssize_t ret = write(0, chaine, strlen(chaine)); 
	printf("\n%-20s: %zu\n", "libc", ret);
	printf("errno: %d\n", errno);
	ret = ft_write(0, chaine, strlen(chaine));
	printf("\n%-20s: %zu\n", "libasm", ret);
	printf("errno: %d\n", errno);

	printf("\nFD:1 / CHAINE / strlen(CHAINE)\n");
	ret = write(1, chaine, strlen(chaine)); 
	printf("\n%-20s: %zu\n", "libc", ret);
	printf("errno: %d\n", errno);
	ret = ft_write(1, chaine, strlen(chaine));
	printf("\n%-20s: %zu\n", "libasm", ret);
	printf("errno: %d\n", errno);

	printf("\nFD:2 / CHAINE / strlen(CHAINE)\n");
	ret = write(2, chaine, strlen(chaine)); 
	printf("\n%-20s: %zu\n", "libc", ret);
	printf("errno: %d\n", errno);
	ret = ft_write(2, chaine, strlen(chaine));
	printf("\n%-20s: %zu\n", "libasm", ret);
	printf("errno: %d\n", errno);

	printf("\nFD:3 / CHAINE / strlen(CHAINE)\n");
	ret = write(3, chaine, strlen(chaine)); 
	printf("%-20s: %zu\n", "libc", ret);
	printf("errno: %d\n", errno);
	ret = ft_write(3, chaine, strlen(chaine));
	printf("%-20s: %zu\n", "libasm", ret);
	printf("errno: %d\n", errno);
}


void check_ft_read() {
	int ret;
	char buff[100];


	printf("\nCHECK FT_READ: \t");printf("errno: %d\n", errno);
	printf("\nFD:1 / CHAINE / strlen(CHAINE)\n");
	ret = read(1, buff, 100);
	printf("%-20s: %-10d |%s\n", "libc", ret, buff);
	printf("errno: %d\n", errno);
	ret = ft_read(1, buff, 100);
	printf("%-20s: %-10d |%s\n", "libasm", ret, buff);
	printf("errno: %d\n", errno);

	printf("\nFD:2 / CHAINE / strlen(CHAINE)\n");
	ret = read(2, buff, 10);
	printf("%-20s: %-10d |%s\n", "libc", ret, buff);
	printf("errno: %d\n", errno);
	ret = ft_read(2, buff, 10);
	printf("%-20s: %-10d |%s\n", "libasm", ret, buff);
	printf("errno: %d\n", errno);

	printf("\nFD:3 / CHAINE / strlen(CHAINE)\n");
	ret = ft_read(3, buff, 10);
	printf("%-20s: %-10d |%s\n", "libasm", ret, buff);
	printf("errno: %d\n", errno);
	ret = read(3, buff, 10);
	printf("%-20s: %-10d |%s\n", "libc", ret, buff);
	printf("errno: %d\n", errno);
	
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
	check_ft_strcpy();
	check_ft_strcmp();
	check_ft_write();
	check_ft_read();
	check_ft_strdup();
	return (0);
}
