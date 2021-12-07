#ifndef ACT_H
#define ACT_H

/* Takes in the game state, attack, and player_id in order 
 * to make meaningful changes to the game state when player attacks.
 *
 * \params attacker     pointer to cyber which initiated attack
 * \params defender     pointer to cyber defending against attack
 * \params attack       char representation of the attack the player selected
 *
 */
void attack(cyber_t * attacker, cyber_t * defender, char * attack);

#endif
