#include <Windows.h>

#pragma region Inbetween / Trampoline
struct vampire_dll {
	HMODULE dll;
	FARPROC oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_0Decode;
	FARPROC oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_0Encode;
	FARPROC oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_1Decode;
	FARPROC oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_1Encode;
	FARPROC oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_2Decode;
	FARPROC oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_2Encode;
	FARPROC oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_3Decode;
	FARPROC oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_3Encode;
	FARPROC oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_4Decode;
	FARPROC oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_4Encode;
	FARPROC oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_5Decode;
	FARPROC oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_5Encode;
	FARPROC oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_6Decode;
	FARPROC oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_6Encode;
	FARPROC oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_7Decode;
	FARPROC oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_7Encode;
	FARPROC oCDAPFN0506_SECURE_BASE_0Decode;
	FARPROC oCDAPFN0506_SECURE_BASE_0Encode;
	FARPROC oCDAPFN0506_SECURE_BASE_1Decode;
	FARPROC oCDAPFN0506_SECURE_BASE_1Encode;
	FARPROC oCDAPFN0506_SECURE_BASE_2Decode;
	FARPROC oCDAPFN0506_SECURE_BASE_2Encode;
	FARPROC oCDAPFN0506_SECURE_BASE_3Decode;
	FARPROC oCDAPFN0506_SECURE_BASE_3Encode;
	FARPROC oCDAPFN0506_SECURE_BASE_4Decode;
	FARPROC oCDAPFN0506_SECURE_BASE_4Encode;
	FARPROC oCDAPFN0506_SECURE_BASE_5Decode;
	FARPROC oCDAPFN0506_SECURE_BASE_5Encode;
	FARPROC oCDAPFN0506_SECURE_BASE_6Decode;
	FARPROC oCDAPFN0506_SECURE_BASE_6Encode;
	FARPROC oCDAPFN0506_SECURE_BASE_7Decode;
	FARPROC oCDAPFN0506_SECURE_BASE_7Encode;
	FARPROC oCreateInterface;
	FARPROC o_firesmoke;
	FARPROC oactivity_copy_prop;
	FARPROC oai_changehintgroup;
	FARPROC oai_changetarget;
	FARPROC oai_goal_standoff;
	FARPROC oai_hint;
	FARPROC oai_network;
	FARPROC oai_sound;
	FARPROC oaiscripted_schedule;
	FARPROC oaiscripted_sequence;
	FARPROC oaitesthull;
	FARPROC oambient_generic;
	FARPROC oambient_soundscheme;
	FARPROC oauspex_aura;
	FARPROC obeam;
	FARPROC obodyque;
	FARPROC ocamera_animated;
	FARPROC ocamera_cinematic;
	FARPROC ocamera_keyframe;
	FARPROC ocamera_track;
	FARPROC odebug_entity;
	FARPROC odisc_particle;
	FARPROC odynamic_prop;
	FARPROC oentityflame;
	FARPROC oenv_beam;
	FARPROC oenv_dustpuff;
	FARPROC oenv_fade;
	FARPROC oenv_fire;
	FARPROC oenv_firesensor;
	FARPROC oenv_firesource;
	FARPROC oenv_floating_camera;
	FARPROC oenv_fog_controller;
	FARPROC oenv_global;
	FARPROC oenv_glow;
	FARPROC oenv_laser;
	FARPROC oenv_message;
	FARPROC oenv_microphone;
	FARPROC oenv_particle;
	FARPROC oenv_particle_hud;
	FARPROC oenv_physexplosion;
	FARPROC oenv_physimpact;
	FARPROC oenv_player_surface_trigger;
	FARPROC oenv_shake;
	FARPROC oenv_shooter;
	FARPROC oenv_soundscape;
	FARPROC oenv_spark;
	FARPROC oenv_sprite;
	FARPROC oenv_steam;
	FARPROC oenv_steamjet;
	FARPROC oenv_sun;
	FARPROC oenv_swarm_bats;
	FARPROC oenv_terrainmorph;
	FARPROC oenv_wind;
	FARPROC oevents_player;
	FARPROC oevents_world;
	FARPROC ofilter_activator_class;
	FARPROC ofilter_activator_feat;
	FARPROC ofilter_activator_inventory;
	FARPROC ofilter_activator_mass;
	FARPROC ofilter_activator_name;
	FARPROC ofilter_base;
	FARPROC ofilter_multi;
	FARPROC oflame_cluster;
	FARPROC ofunCBaseFlex;
	FARPROC ofunc_areaportal;
	FARPROC ofunc_areaportalwindow;
	FARPROC ofunc_breakable;
	FARPROC ofunc_breakable_surf;
	FARPROC ofunc_brush;
	FARPROC ofunc_button;
	FARPROC ofunc_door;
	FARPROC ofunc_door_rotating;
	FARPROC ofunc_dustcloud;
	FARPROC ofunc_dustmotes;
	FARPROC ofunc_elevator;
	FARPROC ofunc_illusionary;
	FARPROC ofunc_keyframed_mover;
	FARPROC ofunc_lod;
	FARPROC ofunc_monitor;
	FARPROC ofunc_movelinear;
	FARPROC ofunc_particle;
	FARPROC ofunc_physbox;
	FARPROC ofunc_plat;
	FARPROC ofunc_platrot;
	FARPROC ofunc_pushable;
	FARPROC ofunc_rot_button;
	FARPROC ofunc_rotating;
	FARPROC ofunc_wall;
	FARPROC ogame_sign;
	FARPROC ogame_text;
	FARPROC ogame_ui;
	FARPROC ogib;
	FARPROC ogibshooter;
	FARPROC ogravity_pellet;
	FARPROC ogrenade;
	FARPROC ohud_counter;
	FARPROC ohud_image;
	FARPROC ohud_timer;
	FARPROC oinfo_constraint_anchor;
	FARPROC oinfo_hint;
	FARPROC oinfo_intermission;
	FARPROC oinfo_landmark;
	FARPROC oinfo_node;
	FARPROC oinfo_node_air;
	FARPROC oinfo_node_air_hint;
	FARPROC oinfo_node_bach_run_1;
	FARPROC oinfo_node_bach_run_2;
	FARPROC oinfo_node_bach_teleport_1;
	FARPROC oinfo_node_bach_teleport_2;
	FARPROC oinfo_node_bach_teleport_3;
	FARPROC oinfo_node_bach_teleport_4;
	FARPROC oinfo_node_chang_column;
	FARPROC oinfo_node_chang_jumpbase;
	FARPROC oinfo_node_chang_ledge;
	FARPROC oinfo_node_chang_teleport;
	FARPROC oinfo_node_climb;
	FARPROC oinfo_node_cover_corner;
	FARPROC oinfo_node_cover_low;
	FARPROC oinfo_node_cover_med;
	FARPROC oinfo_node_crosswalk;
	FARPROC oinfo_node_hint;
	FARPROC oinfo_node_kick_at;
	FARPROC oinfo_node_kick_over;
	FARPROC oinfo_node_link;
	FARPROC oinfo_node_manbat_fly_to_point;
	FARPROC oinfo_node_patrol_point;
	FARPROC oinfo_node_sabbat_arch;
	FARPROC oinfo_node_sabbat_bottom;
	FARPROC oinfo_node_sabbat_dive;
	FARPROC oinfo_node_sabbat_hide;
	FARPROC oinfo_node_sabbat_nojump;
	FARPROC oinfo_node_sabbat_top;
	FARPROC oinfo_node_shoot_at;
	FARPROC oinfo_node_tzimisce;
	FARPROC oinfo_node_tzimisce_claw_left;
	FARPROC oinfo_node_tzimisce_claw_right;
	FARPROC oinfo_node_werewolf;
	FARPROC oinfo_node_werewolf_hint;
	FARPROC oinfo_null;
	FARPROC oinfo_player_deathmatch;
	FARPROC oinfo_player_start;
	FARPROC oinfo_target;
	FARPROC oinfo_teleport_destination;
	FARPROC oinfodecal;
	FARPROC oinspection_brush;
	FARPROC oinspection_node;
	FARPROC oinstanced_scripted_scene;
	FARPROC ointersting_place;
	FARPROC ointersting_place_conversation;
	FARPROC oitem_a_body_armor;
	FARPROC oitem_a_hvy_cloth;
	FARPROC oitem_a_hvy_leather;
	FARPROC oitem_a_lt_cloth;
	FARPROC oitem_a_lt_leather;
	FARPROC oitem_container;
	FARPROC oitem_container_animated;
	FARPROC oitem_container_lock;
	FARPROC oitem_container_one_item_filtered;
	FARPROC oitem_d_holy_light;
	FARPROC oitem_g_astrolite;
	FARPROC oitem_g_bach_journal;
	FARPROC oitem_g_badlucktalisman;
	FARPROC oitem_g_bailbond_receipt;
	FARPROC oitem_g_bertrams_cd;
	FARPROC oitem_g_bloodpack;
	FARPROC oitem_g_bluebloodpack;
	FARPROC oitem_g_brotherhood_flyer;
	FARPROC oitem_g_car_stereo;
	FARPROC oitem_g_cash_box;
	FARPROC oitem_g_driver_license_gimble;
	FARPROC oitem_g_drugs_drug_box;
	FARPROC oitem_g_drugs_morphine_bottle;
	FARPROC oitem_g_drugs_perscription_bottle;
	FARPROC oitem_g_drugs_pill_bottle;
	FARPROC oitem_g_edane_print_report;
	FARPROC oitem_g_edane_report;
	FARPROC oitem_g_eldervitaepack;
	FARPROC oitem_g_eyes;
	FARPROC oitem_g_gargoyle_book;
	FARPROC oitem_g_garys_cd;
	FARPROC oitem_g_garys_film;
	FARPROC oitem_g_garys_photo;
	FARPROC oitem_g_garys_tape;
	FARPROC oitem_g_ghost_pendant;
	FARPROC oitem_g_giovanni_invitation_maria;
	FARPROC oitem_g_giovanni_invitation_victor;
	FARPROC oitem_g_guy_magazine;
	FARPROC oitem_g_hannahs_appt_book;
	FARPROC oitem_g_hatters_screenplay;
	FARPROC oitem_g_horrortape_1;
	FARPROC oitem_g_horrortape_2;
	FARPROC oitem_g_idol_cat;
	FARPROC oitem_g_idol_crane;
	FARPROC oitem_g_idol_dragon;
	FARPROC oitem_g_idol_elephant;
	FARPROC oitem_g_jumbles_flyer;
	FARPROC oitem_g_junkyard_businesscard;
	FARPROC oitem_g_keyring;
	FARPROC oitem_g_larry_briefcase;
	FARPROC oitem_g_lilly_diary;
	FARPROC oitem_g_lilly_photo;
	FARPROC oitem_g_lilly_purse;
	FARPROC oitem_g_lockpick;
	FARPROC oitem_g_mercurio_journal;
	FARPROC oitem_g_milligans_businesscard;
	FARPROC oitem_g_oh_diary;
	FARPROC oitem_g_pisha_book;
	FARPROC oitem_g_pisha_fetish;
	FARPROC oitem_g_ring03;
	FARPROC oitem_g_ring_gold;
	FARPROC oitem_g_ring_serial_killer_1;
	FARPROC oitem_g_ring_silver;
	FARPROC oitem_g_sewerbook_1;
	FARPROC oitem_g_stake;
	FARPROC oitem_g_vampyr_apocrypha;
	FARPROC oitem_g_vv_photo;
	FARPROC oitem_g_wallet;
	FARPROC oitem_g_warr_clipboard;
	FARPROC oitem_g_warr_ledger_1;
	FARPROC oitem_g_warr_ledger_2;
	FARPROC oitem_g_warrens4_passkey;
	FARPROC oitem_g_watch_fancy;
	FARPROC oitem_g_watch_normal;
	FARPROC oitem_g_werewolf_bloodpack;
	FARPROC oitem_g_wireless_camera_1;
	FARPROC oitem_g_wireless_camera_2;
	FARPROC oitem_g_wireless_camera_3;
	FARPROC oitem_g_wireless_camera_4;
	FARPROC oitem_i_written;
	FARPROC oitem_k_ash_cell_key;
	FARPROC oitem_k_carson_apartment_key;
	FARPROC oitem_k_chinese_theatre_key;
	FARPROC oitem_k_clinic_cs_key;
	FARPROC oitem_k_clinic_maintenance_key;
	FARPROC oitem_k_clinic_stairs_key;
	FARPROC oitem_k_edane_key;
	FARPROC oitem_k_empire_jezebel_key;
	FARPROC oitem_k_empire_mafia_key;
	FARPROC oitem_k_fu_cell_key;
	FARPROC oitem_k_fu_office_key;
	FARPROC oitem_k_gallery_noir_key;
	FARPROC oitem_k_gimble_key;
	FARPROC oitem_k_hannahs_safe_key;
	FARPROC oitem_k_hitman_ji_key;
	FARPROC oitem_k_hitman_lu_key;
	FARPROC oitem_k_key_generic;
	FARPROC oitem_k_kiki_key;
	FARPROC oitem_k_leopold_int_key;
	FARPROC oitem_k_lilly_key;
	FARPROC oitem_k_lucky_star_murder_key;
	FARPROC oitem_k_malcolm_office_key;
	FARPROC oitem_k_malkavian_refrigerator_key;
	FARPROC oitem_k_murietta_key;
	FARPROC oitem_k_museum_basement_key;
	FARPROC oitem_k_museum_office_key;
	FARPROC oitem_k_museum_storage_key;
	FARPROC oitem_k_museum_storeroom_key;
	FARPROC oitem_k_netcafe_office_key;
	FARPROC oitem_k_oceanhouse_basement_key;
	FARPROC oitem_k_oceanhouse_sewer_key;
	FARPROC oitem_k_oceanhouse_upstairs_key;
	FARPROC oitem_k_oh_front_key;
	FARPROC oitem_k_sarcophagus_key;
	FARPROC oitem_k_shrekhub_four_key;
	FARPROC oitem_k_shrekhub_one_key;
	FARPROC oitem_k_shrekhub_three_key;
	FARPROC oitem_k_skyline_haven_key;
	FARPROC oitem_k_tatoo_parlor_key;
	FARPROC oitem_k_tawni_apartment_key;
	FARPROC oitem_k_tutorial_chopshop_stairs_key;
	FARPROC oitem_m_money_clip;
	FARPROC oitem_m_money_envelope;
	FARPROC oitem_m_wallet;
	FARPROC oitem_p_gargoyle_talisman;
	FARPROC oitem_p_occult_blood_buff;
	FARPROC oitem_p_occult_dexterity;
	FARPROC oitem_p_occult_dodge;
	FARPROC oitem_p_occult_experience;
	FARPROC oitem_p_occult_frenzy;
	FARPROC oitem_p_occult_hacking;
	FARPROC oitem_p_occult_heal_rate;
	FARPROC oitem_p_occult_lockpicking;
	FARPROC oitem_p_occult_obfuscate;
	FARPROC oitem_p_occult_passive_durations;
	FARPROC oitem_p_occult_presence;
	FARPROC oitem_p_occult_regen;
	FARPROC oitem_p_occult_strength;
	FARPROC oitem_p_occult_thaum_damage;
	FARPROC oitem_p_research_hg_computers;
	FARPROC oitem_p_research_hg_dodge;
	FARPROC oitem_p_research_hg_firearms;
	FARPROC oitem_p_research_hg_melee;
	FARPROC oitem_p_research_lg_computers;
	FARPROC oitem_p_research_lg_dodge;
	FARPROC oitem_p_research_lg_firearms;
	FARPROC oitem_p_research_lg_stealth;
	FARPROC oitem_p_research_mg_brawl;
	FARPROC oitem_p_research_mg_finance;
	FARPROC oitem_p_research_mg_melee;
	FARPROC oitem_p_research_mg_security;
	FARPROC oitem_w_avamp_blade;
	FARPROC oitem_w_baseball_bat;
	FARPROC oitem_w_baton;
	FARPROC oitem_w_bush_hook;
	FARPROC oitem_w_chang_blade;
	FARPROC oitem_w_chang_claw;
	FARPROC oitem_w_chang_energy_ball;
	FARPROC oitem_w_chang_ghost;
	FARPROC oitem_w_claws;
	FARPROC oitem_w_claws_ghoul;
	FARPROC oitem_w_claws_protean4;
	FARPROC oitem_w_claws_protean5;
	FARPROC oitem_w_colt_anaconda;
	FARPROC oitem_w_crossbow;
	FARPROC oitem_w_crossbow_flaming;
	FARPROC oitem_w_deserteagle;
	FARPROC oitem_w_fireaxe;
	FARPROC oitem_w_fists;
	FARPROC oitem_w_flamethrower;
	FARPROC oitem_w_gargoyle_fist;
	FARPROC oitem_w_glock_17c;
	FARPROC oitem_w_grenade_frag;
	FARPROC oitem_w_hengeyokai_fist;
	FARPROC oitem_w_ithaca_m_37;
	FARPROC oitem_w_katana;
	FARPROC oitem_w_knife;
	FARPROC oitem_w_mac_10;
	FARPROC oitem_w_manbat_claw;
	FARPROC oitem_w_mingxiao_melee;
	FARPROC oitem_w_mingxiao_spit;
	FARPROC oitem_w_mingxiao_tentacle;
	FARPROC oitem_w_occultblade;
	FARPROC oitem_w_rem_m_700_bach;
	FARPROC oitem_w_remington_m_700;
	FARPROC oitem_w_sabbatleader_attack;
	FARPROC oitem_w_severed_arm;
	FARPROC oitem_w_sheriff_sword;
	FARPROC oitem_w_sledgehammer;
	FARPROC oitem_w_steyr_aug;
	FARPROC oitem_w_supershotgun;
	FARPROC oitem_w_thirtyeight;
	FARPROC oitem_w_tire_iron;
	FARPROC oitem_w_torch;
	FARPROC oitem_w_tzimisce2_claw;
	FARPROC oitem_w_tzimisce2_head;
	FARPROC oitem_w_tzimisce3_claw;
	FARPROC oitem_w_tzimisce_melee;
	FARPROC oitem_w_unarmed;
	FARPROC oitem_w_uzi;
	FARPROC oitem_w_werewolf_attacks;
	FARPROC oitem_w_zombie_fists;
	FARPROC okeyframe_rope;
	FARPROC okeyframe_track;
	FARPROC olight;
	FARPROC olight_dynamic;
	FARPROC olight_environment;
	FARPROC olight_glspot;
	FARPROC olight_spot;
	FARPROC ologic_auto;
	FARPROC ologic_branch;
	FARPROC ologic_case;
	FARPROC ologic_case_toggle;
	FARPROC ologic_choreographed_scene;
	FARPROC ologic_compare;
	FARPROC ologic_lineto;
	FARPROC ologic_multicompare;
	FARPROC ologic_npc_condition;
	FARPROC ologic_proximity;
	FARPROC ologic_pythoncheck;
	FARPROC ologic_relay;
	FARPROC ologic_squad_condition;
	FARPROC ologic_timer;
	FARPROC ologic_visibility_test;
	FARPROC omath_colorblend;
	FARPROC omath_counter;
	FARPROC omath_remap;
	FARPROC omomentary_door;
	FARPROC omomentary_rot_button;
	FARPROC omonster_generic;
	FARPROC omove_keyframed;
	FARPROC omove_rope;
	FARPROC omover_keyframe;
	FARPROC omultisource;
	FARPROC onpc_TestBaseHumanoid;
	FARPROC onpc_VAndreiBlood;
	FARPROC onpc_VAnimal;
	FARPROC onpc_VAsianVampire;
	FARPROC onpc_VBach;
	FARPROC onpc_VBatSwarm;
	FARPROC onpc_VBrujah;
	FARPROC onpc_VCamera;
	FARPROC onpc_VCameraSecurity;
	FARPROC onpc_VChangBros;
	FARPROC onpc_VChangBrosBlade;
	FARPROC onpc_VChangBrosClaw;
	FARPROC onpc_VCombatman;
	FARPROC onpc_VCop;
	FARPROC onpc_VDialogPedestrian;
	FARPROC onpc_VDog;
	FARPROC onpc_VFrenzyShadow;
	FARPROC onpc_VGangrel;
	FARPROC onpc_VGargoyle;
	FARPROC onpc_VGhoulCroucher;
	FARPROC onpc_VGuard1;
	FARPROC onpc_VHengeyokai;
	FARPROC onpc_VHuman;
	FARPROC onpc_VHumanCombatPatrol;
	FARPROC onpc_VHumanCombatant;
	FARPROC onpc_VHunter;
	FARPROC onpc_VLasombra;
	FARPROC onpc_VMalkavian;
	FARPROC onpc_VManBat;
	FARPROC onpc_VMercurio;
	FARPROC onpc_VMingXiao;
	FARPROC onpc_VMingXiaoTentacle;
	FARPROC onpc_VMoleman;
	FARPROC onpc_VNewscaster;
	FARPROC onpc_VNosferatu;
	FARPROC onpc_VPedestrian;
	FARPROC onpc_VPlaceholder;
	FARPROC onpc_VPlayerController;
	FARPROC onpc_VProneDialog;
	FARPROC onpc_VRat;
	FARPROC onpc_VSabbatGunman;
	FARPROC onpc_VSabbatLeader;
	FARPROC onpc_VScurrying;
	FARPROC onpc_VSheriffMan;
	FARPROC onpc_VSheriffSwarm;
	FARPROC onpc_VStalker;
	FARPROC onpc_VTaxiDriver;
	FARPROC onpc_VTest;
	FARPROC onpc_VToreador;
	FARPROC onpc_VTremere;
	FARPROC onpc_VTzimisce;
	FARPROC onpc_VTzimisceHeadClaw;
	FARPROC onpc_VTzimisceRunner;
	FARPROC onpc_VVampire;
	FARPROC onpc_VVampireBoss;
	FARPROC onpc_VVentrue;
	FARPROC onpc_VWerewolf;
	FARPROC onpc_VWolfMorph;
	FARPROC onpc_VYukie;
	FARPROC onpc_VZombie;
	FARPROC onpc_bullseye;
	FARPROC onpc_crow;
	FARPROC onpc_generic;
	FARPROC onpc_generic_bathack;
	FARPROC onpc_maker;
	FARPROC onpc_maker_fleshpile;
	FARPROC onpc_maker_zombie;
	FARPROC onpc_payphone;
	FARPROC onpc_sabbat;
	FARPROC oparams_explosion;
	FARPROC oparams_particle;
	FARPROC opath_corner;
	FARPROC opath_corner_crash;
	FARPROC ophys_animlink;
	FARPROC ophys_ballsocket;
	FARPROC ophys_constraint;
	FARPROC ophys_constraintsystem;
	FARPROC ophys_convert;
	FARPROC ophys_hinge;
	FARPROC ophys_keepupright;
	FARPROC ophys_motor;
	FARPROC ophys_pulleyconstraint;
	FARPROC ophys_slideconstraint;
	FARPROC ophys_spring;
	FARPROC ophys_thruster;
	FARPROC ophys_torque;
	FARPROC ophysics_cannister;
	FARPROC ophysics_prop;
	FARPROC ophysics_prop_ragdoll;
	FARPROC oplayer;
	FARPROC oplayer_loadsaved;
	FARPROC oplayer_manager;
	FARPROC oplayer_pickup;
	FARPROC oplayer_weaponstrip;
	FARPROC oplayerevents;
	FARPROC opoint_anglesensor;
	FARPROC opoint_camera;
	FARPROC opoint_explosion;
	FARPROC opoint_hurt;
	FARPROC opoint_target;
	FARPROC opoint_teleport;
	FARPROC oprop_base;
	FARPROC oprop_button;
	FARPROC oprop_clockhand;
	FARPROC oprop_destructable;
	FARPROC oprop_doorknob;
	FARPROC oprop_doorknob_electronic;
	FARPROC oprop_dynamic;
	FARPROC oprop_dynamic_ornament;
	FARPROC oprop_hacking;
	FARPROC oprop_haunted;
	FARPROC oprop_keypad;
	FARPROC oprop_largehull_ignore;
	FARPROC oprop_model_state;
	FARPROC oprop_mover;
	FARPROC oprop_padlock;
	FARPROC oprop_physics;
	FARPROC oprop_physics_contested;
	FARPROC oprop_radio;
	FARPROC oprop_ragdoll;
	FARPROC oprop_ragdoll_attached;
	FARPROC oprop_ragdoll_special;
	FARPROC oprop_sign;
	FARPROC oprop_slashable;
	FARPROC oprop_switch;
	FARPROC oraggib;
	FARPROC oscripted_scene;
	FARPROC oscripted_sentence;
	FARPROC oscripted_sequence;
	FARPROC oscripted_target;
	FARPROC osecurity_camera;
	FARPROC osheriff_teleport_bats;
	FARPROC osimple_physics_brush;
	FARPROC osimple_physics_prop;
	FARPROC osky_camera;
	FARPROC osoundent;
	FARPROC ospeaker;
	FARPROC ote_tester;
	FARPROC otectonic;
	FARPROC otest_traceline;
	FARPROC otrigger;
	FARPROC otrigger_autosave;
	FARPROC otrigger_bomb_site;
	FARPROC otrigger_brush;
	FARPROC otrigger_changelevel;
	FARPROC otrigger_checkvolume;
	FARPROC otrigger_discipline_context;
	FARPROC otrigger_electric_bugaloo;
	FARPROC otrigger_environmental_audio;
	FARPROC otrigger_fog;
	FARPROC otrigger_hurt;
	FARPROC otrigger_impact;
	FARPROC otrigger_inventory_check;
	FARPROC otrigger_look;
	FARPROC otrigger_multiple;
	FARPROC otrigger_once;
	FARPROC otrigger_player_activity_level;
	FARPROC otrigger_proximity;
	FARPROC otrigger_push;
	FARPROC otrigger_small_hull;
	FARPROC otrigger_stealth_mod;
	FARPROC otrigger_teleport;
	FARPROC otrigger_transition;
	FARPROC otrigger_werewolf_zone;
	FARPROC otrigger_wind;
	FARPROC ovampire_skill;
	FARPROC ovampireprojectile;
	FARPROC ovampireprojectile_mingxiaospit;
	FARPROC ovdisciplineprojectile;
	FARPROC ovgui_screen;
	FARPROC oviewmodel;
	FARPROC oweapon_physcannon;
	FARPROC owindow_pane;
	FARPROC oworldevents;
	FARPROC oworldspawn;
} vampire;

extern "C" {
	__declspec(naked) void fCDAPFN0506_CDAPFN0506_X_SECURE_BASE_0Decode() { _asm jmp dword ptr [vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_0Decode] }
	__declspec(naked) void fCDAPFN0506_CDAPFN0506_X_SECURE_BASE_0Encode() { _asm jmp dword ptr [vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_0Encode] }
	__declspec(naked) void fCDAPFN0506_CDAPFN0506_X_SECURE_BASE_1Decode() { _asm jmp dword ptr [vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_1Decode] }
	__declspec(naked) void fCDAPFN0506_CDAPFN0506_X_SECURE_BASE_1Encode() { _asm jmp dword ptr [vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_1Encode] }
	__declspec(naked) void fCDAPFN0506_CDAPFN0506_X_SECURE_BASE_2Decode() { _asm jmp dword ptr [vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_2Decode] }
	__declspec(naked) void fCDAPFN0506_CDAPFN0506_X_SECURE_BASE_2Encode() { _asm jmp dword ptr [vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_2Encode] }
	__declspec(naked) void fCDAPFN0506_CDAPFN0506_X_SECURE_BASE_3Decode() { _asm jmp dword ptr [vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_3Decode] }
	__declspec(naked) void fCDAPFN0506_CDAPFN0506_X_SECURE_BASE_3Encode() { _asm jmp dword ptr [vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_3Encode] }
	__declspec(naked) void fCDAPFN0506_CDAPFN0506_X_SECURE_BASE_4Decode() { _asm jmp dword ptr [vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_4Decode] }
	__declspec(naked) void fCDAPFN0506_CDAPFN0506_X_SECURE_BASE_4Encode() { _asm jmp dword ptr [vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_4Encode] }
	__declspec(naked) void fCDAPFN0506_CDAPFN0506_X_SECURE_BASE_5Decode() { _asm jmp dword ptr [vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_5Decode] }
	__declspec(naked) void fCDAPFN0506_CDAPFN0506_X_SECURE_BASE_5Encode() { _asm jmp dword ptr [vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_5Encode] }
	__declspec(naked) void fCDAPFN0506_CDAPFN0506_X_SECURE_BASE_6Decode() { _asm jmp dword ptr [vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_6Decode] }
	__declspec(naked) void fCDAPFN0506_CDAPFN0506_X_SECURE_BASE_6Encode() { _asm jmp dword ptr [vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_6Encode] }
	__declspec(naked) void fCDAPFN0506_CDAPFN0506_X_SECURE_BASE_7Decode() { _asm jmp dword ptr [vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_7Decode] }
	__declspec(naked) void fCDAPFN0506_CDAPFN0506_X_SECURE_BASE_7Encode() { _asm jmp dword ptr [vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_7Encode] }
	__declspec(naked) void fCDAPFN0506_SECURE_BASE_0Decode() { _asm jmp dword ptr [vampire.oCDAPFN0506_SECURE_BASE_0Decode] }
	__declspec(naked) void fCDAPFN0506_SECURE_BASE_0Encode() { _asm jmp dword ptr [vampire.oCDAPFN0506_SECURE_BASE_0Encode] }
	__declspec(naked) void fCDAPFN0506_SECURE_BASE_1Decode() { _asm jmp dword ptr [vampire.oCDAPFN0506_SECURE_BASE_1Decode] }
	__declspec(naked) void fCDAPFN0506_SECURE_BASE_1Encode() { _asm jmp dword ptr [vampire.oCDAPFN0506_SECURE_BASE_1Encode] }
	__declspec(naked) void fCDAPFN0506_SECURE_BASE_2Decode() { _asm jmp dword ptr [vampire.oCDAPFN0506_SECURE_BASE_2Decode] }
	__declspec(naked) void fCDAPFN0506_SECURE_BASE_2Encode() { _asm jmp dword ptr [vampire.oCDAPFN0506_SECURE_BASE_2Encode] }
	__declspec(naked) void fCDAPFN0506_SECURE_BASE_3Decode() { _asm jmp dword ptr [vampire.oCDAPFN0506_SECURE_BASE_3Decode] }
	__declspec(naked) void fCDAPFN0506_SECURE_BASE_3Encode() { _asm jmp dword ptr [vampire.oCDAPFN0506_SECURE_BASE_3Encode] }
	__declspec(naked) void fCDAPFN0506_SECURE_BASE_4Decode() { _asm jmp dword ptr [vampire.oCDAPFN0506_SECURE_BASE_4Decode] }
	__declspec(naked) void fCDAPFN0506_SECURE_BASE_4Encode() { _asm jmp dword ptr [vampire.oCDAPFN0506_SECURE_BASE_4Encode] }
	__declspec(naked) void fCDAPFN0506_SECURE_BASE_5Decode() { _asm jmp dword ptr [vampire.oCDAPFN0506_SECURE_BASE_5Decode] }
	__declspec(naked) void fCDAPFN0506_SECURE_BASE_5Encode() { _asm jmp dword ptr [vampire.oCDAPFN0506_SECURE_BASE_5Encode] }
	__declspec(naked) void fCDAPFN0506_SECURE_BASE_6Decode() { _asm jmp dword ptr [vampire.oCDAPFN0506_SECURE_BASE_6Decode] }
	__declspec(naked) void fCDAPFN0506_SECURE_BASE_6Encode() { _asm jmp dword ptr [vampire.oCDAPFN0506_SECURE_BASE_6Encode] }
	__declspec(naked) void fCDAPFN0506_SECURE_BASE_7Decode() { _asm jmp dword ptr [vampire.oCDAPFN0506_SECURE_BASE_7Decode] }
	__declspec(naked) void fCDAPFN0506_SECURE_BASE_7Encode() { _asm jmp dword ptr [vampire.oCDAPFN0506_SECURE_BASE_7Encode] }
	__declspec(naked) void fCreateInterface() { _asm jmp dword ptr [vampire.oCreateInterface] }
	__declspec(naked) void f_firesmoke() { _asm jmp dword ptr [vampire.o_firesmoke] }
	__declspec(naked) void factivity_copy_prop() { _asm jmp dword ptr [vampire.oactivity_copy_prop] }
	__declspec(naked) void fai_changehintgroup() { _asm jmp dword ptr [vampire.oai_changehintgroup] }
	__declspec(naked) void fai_changetarget() { _asm jmp dword ptr [vampire.oai_changetarget] }
	__declspec(naked) void fai_goal_standoff() { _asm jmp dword ptr [vampire.oai_goal_standoff] }
	__declspec(naked) void fai_hint() { _asm jmp dword ptr [vampire.oai_hint] }
	__declspec(naked) void fai_network() { _asm jmp dword ptr [vampire.oai_network] }
	__declspec(naked) void fai_sound() { _asm jmp dword ptr [vampire.oai_sound] }
	__declspec(naked) void faiscripted_schedule() { _asm jmp dword ptr [vampire.oaiscripted_schedule] }
	__declspec(naked) void faiscripted_sequence() { _asm jmp dword ptr [vampire.oaiscripted_sequence] }
	__declspec(naked) void faitesthull() { _asm jmp dword ptr [vampire.oaitesthull] }
	__declspec(naked) void fambient_generic() { _asm jmp dword ptr [vampire.oambient_generic] }
	__declspec(naked) void fambient_soundscheme() { _asm jmp dword ptr [vampire.oambient_soundscheme] }
	__declspec(naked) void fauspex_aura() { _asm jmp dword ptr [vampire.oauspex_aura] }
	__declspec(naked) void fbeam() { _asm jmp dword ptr [vampire.obeam] }
	__declspec(naked) void fbodyque() { _asm jmp dword ptr [vampire.obodyque] }
	__declspec(naked) void fcamera_animated() { _asm jmp dword ptr [vampire.ocamera_animated] }
	__declspec(naked) void fcamera_cinematic() { _asm jmp dword ptr [vampire.ocamera_cinematic] }
	__declspec(naked) void fcamera_keyframe() { _asm jmp dword ptr [vampire.ocamera_keyframe] }
	__declspec(naked) void fcamera_track() { _asm jmp dword ptr [vampire.ocamera_track] }
	__declspec(naked) void fdebug_entity() { _asm jmp dword ptr [vampire.odebug_entity] }
	__declspec(naked) void fdisc_particle() { _asm jmp dword ptr [vampire.odisc_particle] }
	__declspec(naked) void fdynamic_prop() { _asm jmp dword ptr [vampire.odynamic_prop] }
	__declspec(naked) void fentityflame() { _asm jmp dword ptr [vampire.oentityflame] }
	__declspec(naked) void fenv_beam() { _asm jmp dword ptr [vampire.oenv_beam] }
	__declspec(naked) void fenv_dustpuff() { _asm jmp dword ptr [vampire.oenv_dustpuff] }
	__declspec(naked) void fenv_fade() { _asm jmp dword ptr [vampire.oenv_fade] }
	__declspec(naked) void fenv_fire() { _asm jmp dword ptr [vampire.oenv_fire] }
	__declspec(naked) void fenv_firesensor() { _asm jmp dword ptr [vampire.oenv_firesensor] }
	__declspec(naked) void fenv_firesource() { _asm jmp dword ptr [vampire.oenv_firesource] }
	__declspec(naked) void fenv_floating_camera() { _asm jmp dword ptr [vampire.oenv_floating_camera] }
	__declspec(naked) void fenv_fog_controller() { _asm jmp dword ptr [vampire.oenv_fog_controller] }
	__declspec(naked) void fenv_global() { _asm jmp dword ptr [vampire.oenv_global] }
	__declspec(naked) void fenv_glow() { _asm jmp dword ptr [vampire.oenv_glow] }
	__declspec(naked) void fenv_laser() { _asm jmp dword ptr [vampire.oenv_laser] }
	__declspec(naked) void fenv_message() { _asm jmp dword ptr [vampire.oenv_message] }
	__declspec(naked) void fenv_microphone() { _asm jmp dword ptr [vampire.oenv_microphone] }
	__declspec(naked) void fenv_particle() { _asm jmp dword ptr [vampire.oenv_particle] }
	__declspec(naked) void fenv_particle_hud() { _asm jmp dword ptr [vampire.oenv_particle_hud] }
	__declspec(naked) void fenv_physexplosion() { _asm jmp dword ptr [vampire.oenv_physexplosion] }
	__declspec(naked) void fenv_physimpact() { _asm jmp dword ptr [vampire.oenv_physimpact] }
	__declspec(naked) void fenv_player_surface_trigger() { _asm jmp dword ptr [vampire.oenv_player_surface_trigger] }
	__declspec(naked) void fenv_shake() { _asm jmp dword ptr [vampire.oenv_shake] }
	__declspec(naked) void fenv_shooter() { _asm jmp dword ptr [vampire.oenv_shooter] }
	__declspec(naked) void fenv_soundscape() { _asm jmp dword ptr [vampire.oenv_soundscape] }
	__declspec(naked) void fenv_spark() { _asm jmp dword ptr [vampire.oenv_spark] }
	__declspec(naked) void fenv_sprite() { _asm jmp dword ptr [vampire.oenv_sprite] }
	__declspec(naked) void fenv_steam() { _asm jmp dword ptr [vampire.oenv_steam] }
	__declspec(naked) void fenv_steamjet() { _asm jmp dword ptr [vampire.oenv_steamjet] }
	__declspec(naked) void fenv_sun() { _asm jmp dword ptr [vampire.oenv_sun] }
	__declspec(naked) void fenv_swarm_bats() { _asm jmp dword ptr [vampire.oenv_swarm_bats] }
	__declspec(naked) void fenv_terrainmorph() { _asm jmp dword ptr [vampire.oenv_terrainmorph] }
	__declspec(naked) void fenv_wind() { _asm jmp dword ptr [vampire.oenv_wind] }
	__declspec(naked) void fevents_player() { _asm jmp dword ptr [vampire.oevents_player] }
	__declspec(naked) void fevents_world() { _asm jmp dword ptr [vampire.oevents_world] }
	__declspec(naked) void ffilter_activator_class() { _asm jmp dword ptr [vampire.ofilter_activator_class] }
	__declspec(naked) void ffilter_activator_feat() { _asm jmp dword ptr [vampire.ofilter_activator_feat] }
	__declspec(naked) void ffilter_activator_inventory() { _asm jmp dword ptr [vampire.ofilter_activator_inventory] }
	__declspec(naked) void ffilter_activator_mass() { _asm jmp dword ptr [vampire.ofilter_activator_mass] }
	__declspec(naked) void ffilter_activator_name() { _asm jmp dword ptr [vampire.ofilter_activator_name] }
	__declspec(naked) void ffilter_base() { _asm jmp dword ptr [vampire.ofilter_base] }
	__declspec(naked) void ffilter_multi() { _asm jmp dword ptr [vampire.ofilter_multi] }
	__declspec(naked) void fflame_cluster() { _asm jmp dword ptr [vampire.oflame_cluster] }
	__declspec(naked) void ffunCBaseFlex() { _asm jmp dword ptr [vampire.ofunCBaseFlex] }
	__declspec(naked) void ffunc_areaportal() { _asm jmp dword ptr [vampire.ofunc_areaportal] }
	__declspec(naked) void ffunc_areaportalwindow() { _asm jmp dword ptr [vampire.ofunc_areaportalwindow] }
	__declspec(naked) void ffunc_breakable() { _asm jmp dword ptr [vampire.ofunc_breakable] }
	__declspec(naked) void ffunc_breakable_surf() { _asm jmp dword ptr [vampire.ofunc_breakable_surf] }
	__declspec(naked) void ffunc_brush() { _asm jmp dword ptr [vampire.ofunc_brush] }
	__declspec(naked) void ffunc_button() { _asm jmp dword ptr [vampire.ofunc_button] }
	__declspec(naked) void ffunc_door() { _asm jmp dword ptr [vampire.ofunc_door] }
	__declspec(naked) void ffunc_door_rotating() { _asm jmp dword ptr [vampire.ofunc_door_rotating] }
	__declspec(naked) void ffunc_dustcloud() { _asm jmp dword ptr [vampire.ofunc_dustcloud] }
	__declspec(naked) void ffunc_dustmotes() { _asm jmp dword ptr [vampire.ofunc_dustmotes] }
	__declspec(naked) void ffunc_elevator() { _asm jmp dword ptr [vampire.ofunc_elevator] }
	__declspec(naked) void ffunc_illusionary() { _asm jmp dword ptr [vampire.ofunc_illusionary] }
	__declspec(naked) void ffunc_keyframed_mover() { _asm jmp dword ptr [vampire.ofunc_keyframed_mover] }
	__declspec(naked) void ffunc_lod() { _asm jmp dword ptr [vampire.ofunc_lod] }
	__declspec(naked) void ffunc_monitor() { _asm jmp dword ptr [vampire.ofunc_monitor] }
	__declspec(naked) void ffunc_movelinear() { _asm jmp dword ptr [vampire.ofunc_movelinear] }
	__declspec(naked) void ffunc_particle() { _asm jmp dword ptr [vampire.ofunc_particle] }
	__declspec(naked) void ffunc_physbox() { _asm jmp dword ptr [vampire.ofunc_physbox] }
	__declspec(naked) void ffunc_plat() { _asm jmp dword ptr [vampire.ofunc_plat] }
	__declspec(naked) void ffunc_platrot() { _asm jmp dword ptr [vampire.ofunc_platrot] }
	__declspec(naked) void ffunc_pushable() { _asm jmp dword ptr [vampire.ofunc_pushable] }
	__declspec(naked) void ffunc_rot_button() { _asm jmp dword ptr [vampire.ofunc_rot_button] }
	__declspec(naked) void ffunc_rotating() { _asm jmp dword ptr [vampire.ofunc_rotating] }
	__declspec(naked) void ffunc_wall() { _asm jmp dword ptr [vampire.ofunc_wall] }
	__declspec(naked) void fgame_sign() { _asm jmp dword ptr [vampire.ogame_sign] }
	__declspec(naked) void fgame_text() { _asm jmp dword ptr [vampire.ogame_text] }
	__declspec(naked) void fgame_ui() { _asm jmp dword ptr [vampire.ogame_ui] }
	__declspec(naked) void fgib() { _asm jmp dword ptr [vampire.ogib] }
	__declspec(naked) void fgibshooter() { _asm jmp dword ptr [vampire.ogibshooter] }
	__declspec(naked) void fgravity_pellet() { _asm jmp dword ptr [vampire.ogravity_pellet] }
	__declspec(naked) void fgrenade() { _asm jmp dword ptr [vampire.ogrenade] }
	__declspec(naked) void fhud_counter() { _asm jmp dword ptr [vampire.ohud_counter] }
	__declspec(naked) void fhud_image() { _asm jmp dword ptr [vampire.ohud_image] }
	__declspec(naked) void fhud_timer() { _asm jmp dword ptr [vampire.ohud_timer] }
	__declspec(naked) void finfo_constraint_anchor() { _asm jmp dword ptr [vampire.oinfo_constraint_anchor] }
	__declspec(naked) void finfo_hint() { _asm jmp dword ptr [vampire.oinfo_hint] }
	__declspec(naked) void finfo_intermission() { _asm jmp dword ptr [vampire.oinfo_intermission] }
	__declspec(naked) void finfo_landmark() { _asm jmp dword ptr [vampire.oinfo_landmark] }
	__declspec(naked) void finfo_node() { _asm jmp dword ptr [vampire.oinfo_node] }
	__declspec(naked) void finfo_node_air() { _asm jmp dword ptr [vampire.oinfo_node_air] }
	__declspec(naked) void finfo_node_air_hint() { _asm jmp dword ptr [vampire.oinfo_node_air_hint] }
	__declspec(naked) void finfo_node_bach_run_1() { _asm jmp dword ptr [vampire.oinfo_node_bach_run_1] }
	__declspec(naked) void finfo_node_bach_run_2() { _asm jmp dword ptr [vampire.oinfo_node_bach_run_2] }
	__declspec(naked) void finfo_node_bach_teleport_1() { _asm jmp dword ptr [vampire.oinfo_node_bach_teleport_1] }
	__declspec(naked) void finfo_node_bach_teleport_2() { _asm jmp dword ptr [vampire.oinfo_node_bach_teleport_2] }
	__declspec(naked) void finfo_node_bach_teleport_3() { _asm jmp dword ptr [vampire.oinfo_node_bach_teleport_3] }
	__declspec(naked) void finfo_node_bach_teleport_4() { _asm jmp dword ptr [vampire.oinfo_node_bach_teleport_4] }
	__declspec(naked) void finfo_node_chang_column() { _asm jmp dword ptr [vampire.oinfo_node_chang_column] }
	__declspec(naked) void finfo_node_chang_jumpbase() { _asm jmp dword ptr [vampire.oinfo_node_chang_jumpbase] }
	__declspec(naked) void finfo_node_chang_ledge() { _asm jmp dword ptr [vampire.oinfo_node_chang_ledge] }
	__declspec(naked) void finfo_node_chang_teleport() { _asm jmp dword ptr [vampire.oinfo_node_chang_teleport] }
	__declspec(naked) void finfo_node_climb() { _asm jmp dword ptr [vampire.oinfo_node_climb] }
	__declspec(naked) void finfo_node_cover_corner() { _asm jmp dword ptr [vampire.oinfo_node_cover_corner] }
	__declspec(naked) void finfo_node_cover_low() { _asm jmp dword ptr [vampire.oinfo_node_cover_low] }
	__declspec(naked) void finfo_node_cover_med() { _asm jmp dword ptr [vampire.oinfo_node_cover_med] }
	__declspec(naked) void finfo_node_crosswalk() { _asm jmp dword ptr [vampire.oinfo_node_crosswalk] }
	__declspec(naked) void finfo_node_hint() { _asm jmp dword ptr [vampire.oinfo_node_hint] }
	__declspec(naked) void finfo_node_kick_at() { _asm jmp dword ptr [vampire.oinfo_node_kick_at] }
	__declspec(naked) void finfo_node_kick_over() { _asm jmp dword ptr [vampire.oinfo_node_kick_over] }
	__declspec(naked) void finfo_node_link() { _asm jmp dword ptr [vampire.oinfo_node_link] }
	__declspec(naked) void finfo_node_manbat_fly_to_point() { _asm jmp dword ptr [vampire.oinfo_node_manbat_fly_to_point] }
	__declspec(naked) void finfo_node_patrol_point() { _asm jmp dword ptr [vampire.oinfo_node_patrol_point] }
	__declspec(naked) void finfo_node_sabbat_arch() { _asm jmp dword ptr [vampire.oinfo_node_sabbat_arch] }
	__declspec(naked) void finfo_node_sabbat_bottom() { _asm jmp dword ptr [vampire.oinfo_node_sabbat_bottom] }
	__declspec(naked) void finfo_node_sabbat_dive() { _asm jmp dword ptr [vampire.oinfo_node_sabbat_dive] }
	__declspec(naked) void finfo_node_sabbat_hide() { _asm jmp dword ptr [vampire.oinfo_node_sabbat_hide] }
	__declspec(naked) void finfo_node_sabbat_nojump() { _asm jmp dword ptr [vampire.oinfo_node_sabbat_nojump] }
	__declspec(naked) void finfo_node_sabbat_top() { _asm jmp dword ptr [vampire.oinfo_node_sabbat_top] }
	__declspec(naked) void finfo_node_shoot_at() { _asm jmp dword ptr [vampire.oinfo_node_shoot_at] }
	__declspec(naked) void finfo_node_tzimisce() { _asm jmp dword ptr [vampire.oinfo_node_tzimisce] }
	__declspec(naked) void finfo_node_tzimisce_claw_left() { _asm jmp dword ptr [vampire.oinfo_node_tzimisce_claw_left] }
	__declspec(naked) void finfo_node_tzimisce_claw_right() { _asm jmp dword ptr [vampire.oinfo_node_tzimisce_claw_right] }
	__declspec(naked) void finfo_node_werewolf() { _asm jmp dword ptr [vampire.oinfo_node_werewolf] }
	__declspec(naked) void finfo_node_werewolf_hint() { _asm jmp dword ptr [vampire.oinfo_node_werewolf_hint] }
	__declspec(naked) void finfo_null() { _asm jmp dword ptr [vampire.oinfo_null] }
	__declspec(naked) void finfo_player_deathmatch() { _asm jmp dword ptr [vampire.oinfo_player_deathmatch] }
	__declspec(naked) void finfo_player_start() { _asm jmp dword ptr [vampire.oinfo_player_start] }
	__declspec(naked) void finfo_target() { _asm jmp dword ptr [vampire.oinfo_target] }
	__declspec(naked) void finfo_teleport_destination() { _asm jmp dword ptr [vampire.oinfo_teleport_destination] }
	__declspec(naked) void finfodecal() { _asm jmp dword ptr [vampire.oinfodecal] }
	__declspec(naked) void finspection_brush() { _asm jmp dword ptr [vampire.oinspection_brush] }
	__declspec(naked) void finspection_node() { _asm jmp dword ptr [vampire.oinspection_node] }
	__declspec(naked) void finstanced_scripted_scene() { _asm jmp dword ptr [vampire.oinstanced_scripted_scene] }
	__declspec(naked) void fintersting_place() { _asm jmp dword ptr [vampire.ointersting_place] }
	__declspec(naked) void fintersting_place_conversation() { _asm jmp dword ptr [vampire.ointersting_place_conversation] }
	__declspec(naked) void fitem_a_body_armor() { _asm jmp dword ptr [vampire.oitem_a_body_armor] }
	__declspec(naked) void fitem_a_hvy_cloth() { _asm jmp dword ptr [vampire.oitem_a_hvy_cloth] }
	__declspec(naked) void fitem_a_hvy_leather() { _asm jmp dword ptr [vampire.oitem_a_hvy_leather] }
	__declspec(naked) void fitem_a_lt_cloth() { _asm jmp dword ptr [vampire.oitem_a_lt_cloth] }
	__declspec(naked) void fitem_a_lt_leather() { _asm jmp dword ptr [vampire.oitem_a_lt_leather] }
	__declspec(naked) void fitem_container() { _asm jmp dword ptr [vampire.oitem_container] }
	__declspec(naked) void fitem_container_animated() { _asm jmp dword ptr [vampire.oitem_container_animated] }
	__declspec(naked) void fitem_container_lock() { _asm jmp dword ptr [vampire.oitem_container_lock] }
	__declspec(naked) void fitem_container_one_item_filtered() { _asm jmp dword ptr [vampire.oitem_container_one_item_filtered] }
	__declspec(naked) void fitem_d_holy_light() { _asm jmp dword ptr [vampire.oitem_d_holy_light] }
	__declspec(naked) void fitem_g_astrolite() { _asm jmp dword ptr [vampire.oitem_g_astrolite] }
	__declspec(naked) void fitem_g_bach_journal() { _asm jmp dword ptr [vampire.oitem_g_bach_journal] }
	__declspec(naked) void fitem_g_badlucktalisman() { _asm jmp dword ptr [vampire.oitem_g_badlucktalisman] }
	__declspec(naked) void fitem_g_bailbond_receipt() { _asm jmp dword ptr [vampire.oitem_g_bailbond_receipt] }
	__declspec(naked) void fitem_g_bertrams_cd() { _asm jmp dword ptr [vampire.oitem_g_bertrams_cd] }
	__declspec(naked) void fitem_g_bloodpack() { _asm jmp dword ptr [vampire.oitem_g_bloodpack] }
	__declspec(naked) void fitem_g_bluebloodpack() { _asm jmp dword ptr [vampire.oitem_g_bluebloodpack] }
	__declspec(naked) void fitem_g_brotherhood_flyer() { _asm jmp dword ptr [vampire.oitem_g_brotherhood_flyer] }
	__declspec(naked) void fitem_g_car_stereo() { _asm jmp dword ptr [vampire.oitem_g_car_stereo] }
	__declspec(naked) void fitem_g_cash_box() { _asm jmp dword ptr [vampire.oitem_g_cash_box] }
	__declspec(naked) void fitem_g_driver_license_gimble() { _asm jmp dword ptr [vampire.oitem_g_driver_license_gimble] }
	__declspec(naked) void fitem_g_drugs_drug_box() { _asm jmp dword ptr [vampire.oitem_g_drugs_drug_box] }
	__declspec(naked) void fitem_g_drugs_morphine_bottle() { _asm jmp dword ptr [vampire.oitem_g_drugs_morphine_bottle] }
	__declspec(naked) void fitem_g_drugs_perscription_bottle() { _asm jmp dword ptr [vampire.oitem_g_drugs_perscription_bottle] }
	__declspec(naked) void fitem_g_drugs_pill_bottle() { _asm jmp dword ptr [vampire.oitem_g_drugs_pill_bottle] }
	__declspec(naked) void fitem_g_edane_print_report() { _asm jmp dword ptr [vampire.oitem_g_edane_print_report] }
	__declspec(naked) void fitem_g_edane_report() { _asm jmp dword ptr [vampire.oitem_g_edane_report] }
	__declspec(naked) void fitem_g_eldervitaepack() { _asm jmp dword ptr [vampire.oitem_g_eldervitaepack] }
	__declspec(naked) void fitem_g_eyes() { _asm jmp dword ptr [vampire.oitem_g_eyes] }
	__declspec(naked) void fitem_g_gargoyle_book() { _asm jmp dword ptr [vampire.oitem_g_gargoyle_book] }
	__declspec(naked) void fitem_g_garys_cd() { _asm jmp dword ptr [vampire.oitem_g_garys_cd] }
	__declspec(naked) void fitem_g_garys_film() { _asm jmp dword ptr [vampire.oitem_g_garys_film] }
	__declspec(naked) void fitem_g_garys_photo() { _asm jmp dword ptr [vampire.oitem_g_garys_photo] }
	__declspec(naked) void fitem_g_garys_tape() { _asm jmp dword ptr [vampire.oitem_g_garys_tape] }
	__declspec(naked) void fitem_g_ghost_pendant() { _asm jmp dword ptr [vampire.oitem_g_ghost_pendant] }
	__declspec(naked) void fitem_g_giovanni_invitation_maria() { _asm jmp dword ptr [vampire.oitem_g_giovanni_invitation_maria] }
	__declspec(naked) void fitem_g_giovanni_invitation_victor() { _asm jmp dword ptr [vampire.oitem_g_giovanni_invitation_victor] }
	__declspec(naked) void fitem_g_guy_magazine() { _asm jmp dword ptr [vampire.oitem_g_guy_magazine] }
	__declspec(naked) void fitem_g_hannahs_appt_book() { _asm jmp dword ptr [vampire.oitem_g_hannahs_appt_book] }
	__declspec(naked) void fitem_g_hatters_screenplay() { _asm jmp dword ptr [vampire.oitem_g_hatters_screenplay] }
	__declspec(naked) void fitem_g_horrortape_1() { _asm jmp dword ptr [vampire.oitem_g_horrortape_1] }
	__declspec(naked) void fitem_g_horrortape_2() { _asm jmp dword ptr [vampire.oitem_g_horrortape_2] }
	__declspec(naked) void fitem_g_idol_cat() { _asm jmp dword ptr [vampire.oitem_g_idol_cat] }
	__declspec(naked) void fitem_g_idol_crane() { _asm jmp dword ptr [vampire.oitem_g_idol_crane] }
	__declspec(naked) void fitem_g_idol_dragon() { _asm jmp dword ptr [vampire.oitem_g_idol_dragon] }
	__declspec(naked) void fitem_g_idol_elephant() { _asm jmp dword ptr [vampire.oitem_g_idol_elephant] }
	__declspec(naked) void fitem_g_jumbles_flyer() { _asm jmp dword ptr [vampire.oitem_g_jumbles_flyer] }
	__declspec(naked) void fitem_g_junkyard_businesscard() { _asm jmp dword ptr [vampire.oitem_g_junkyard_businesscard] }
	__declspec(naked) void fitem_g_keyring() { _asm jmp dword ptr [vampire.oitem_g_keyring] }
	__declspec(naked) void fitem_g_larry_briefcase() { _asm jmp dword ptr [vampire.oitem_g_larry_briefcase] }
	__declspec(naked) void fitem_g_lilly_diary() { _asm jmp dword ptr [vampire.oitem_g_lilly_diary] }
	__declspec(naked) void fitem_g_lilly_photo() { _asm jmp dword ptr [vampire.oitem_g_lilly_photo] }
	__declspec(naked) void fitem_g_lilly_purse() { _asm jmp dword ptr [vampire.oitem_g_lilly_purse] }
	__declspec(naked) void fitem_g_lockpick() { _asm jmp dword ptr [vampire.oitem_g_lockpick] }
	__declspec(naked) void fitem_g_mercurio_journal() { _asm jmp dword ptr [vampire.oitem_g_mercurio_journal] }
	__declspec(naked) void fitem_g_milligans_businesscard() { _asm jmp dword ptr [vampire.oitem_g_milligans_businesscard] }
	__declspec(naked) void fitem_g_oh_diary() { _asm jmp dword ptr [vampire.oitem_g_oh_diary] }
	__declspec(naked) void fitem_g_pisha_book() { _asm jmp dword ptr [vampire.oitem_g_pisha_book] }
	__declspec(naked) void fitem_g_pisha_fetish() { _asm jmp dword ptr [vampire.oitem_g_pisha_fetish] }
	__declspec(naked) void fitem_g_ring03() { _asm jmp dword ptr [vampire.oitem_g_ring03] }
	__declspec(naked) void fitem_g_ring_gold() { _asm jmp dword ptr [vampire.oitem_g_ring_gold] }
	__declspec(naked) void fitem_g_ring_serial_killer_1() { _asm jmp dword ptr [vampire.oitem_g_ring_serial_killer_1] }
	__declspec(naked) void fitem_g_ring_silver() { _asm jmp dword ptr [vampire.oitem_g_ring_silver] }
	__declspec(naked) void fitem_g_sewerbook_1() { _asm jmp dword ptr [vampire.oitem_g_sewerbook_1] }
	__declspec(naked) void fitem_g_stake() { _asm jmp dword ptr [vampire.oitem_g_stake] }
	__declspec(naked) void fitem_g_vampyr_apocrypha() { _asm jmp dword ptr [vampire.oitem_g_vampyr_apocrypha] }
	__declspec(naked) void fitem_g_vv_photo() { _asm jmp dword ptr [vampire.oitem_g_vv_photo] }
	__declspec(naked) void fitem_g_wallet() { _asm jmp dword ptr [vampire.oitem_g_wallet] }
	__declspec(naked) void fitem_g_warr_clipboard() { _asm jmp dword ptr [vampire.oitem_g_warr_clipboard] }
	__declspec(naked) void fitem_g_warr_ledger_1() { _asm jmp dword ptr [vampire.oitem_g_warr_ledger_1] }
	__declspec(naked) void fitem_g_warr_ledger_2() { _asm jmp dword ptr [vampire.oitem_g_warr_ledger_2] }
	__declspec(naked) void fitem_g_warrens4_passkey() { _asm jmp dword ptr [vampire.oitem_g_warrens4_passkey] }
	__declspec(naked) void fitem_g_watch_fancy() { _asm jmp dword ptr [vampire.oitem_g_watch_fancy] }
	__declspec(naked) void fitem_g_watch_normal() { _asm jmp dword ptr [vampire.oitem_g_watch_normal] }
	__declspec(naked) void fitem_g_werewolf_bloodpack() { _asm jmp dword ptr [vampire.oitem_g_werewolf_bloodpack] }
	__declspec(naked) void fitem_g_wireless_camera_1() { _asm jmp dword ptr [vampire.oitem_g_wireless_camera_1] }
	__declspec(naked) void fitem_g_wireless_camera_2() { _asm jmp dword ptr [vampire.oitem_g_wireless_camera_2] }
	__declspec(naked) void fitem_g_wireless_camera_3() { _asm jmp dword ptr [vampire.oitem_g_wireless_camera_3] }
	__declspec(naked) void fitem_g_wireless_camera_4() { _asm jmp dword ptr [vampire.oitem_g_wireless_camera_4] }
	__declspec(naked) void fitem_i_written() { _asm jmp dword ptr [vampire.oitem_i_written] }
	__declspec(naked) void fitem_k_ash_cell_key() { _asm jmp dword ptr [vampire.oitem_k_ash_cell_key] }
	__declspec(naked) void fitem_k_carson_apartment_key() { _asm jmp dword ptr [vampire.oitem_k_carson_apartment_key] }
	__declspec(naked) void fitem_k_chinese_theatre_key() { _asm jmp dword ptr [vampire.oitem_k_chinese_theatre_key] }
	__declspec(naked) void fitem_k_clinic_cs_key() { _asm jmp dword ptr [vampire.oitem_k_clinic_cs_key] }
	__declspec(naked) void fitem_k_clinic_maintenance_key() { _asm jmp dword ptr [vampire.oitem_k_clinic_maintenance_key] }
	__declspec(naked) void fitem_k_clinic_stairs_key() { _asm jmp dword ptr [vampire.oitem_k_clinic_stairs_key] }
	__declspec(naked) void fitem_k_edane_key() { _asm jmp dword ptr [vampire.oitem_k_edane_key] }
	__declspec(naked) void fitem_k_empire_jezebel_key() { _asm jmp dword ptr [vampire.oitem_k_empire_jezebel_key] }
	__declspec(naked) void fitem_k_empire_mafia_key() { _asm jmp dword ptr [vampire.oitem_k_empire_mafia_key] }
	__declspec(naked) void fitem_k_fu_cell_key() { _asm jmp dword ptr [vampire.oitem_k_fu_cell_key] }
	__declspec(naked) void fitem_k_fu_office_key() { _asm jmp dword ptr [vampire.oitem_k_fu_office_key] }
	__declspec(naked) void fitem_k_gallery_noir_key() { _asm jmp dword ptr [vampire.oitem_k_gallery_noir_key] }
	__declspec(naked) void fitem_k_gimble_key() { _asm jmp dword ptr [vampire.oitem_k_gimble_key] }
	__declspec(naked) void fitem_k_hannahs_safe_key() { _asm jmp dword ptr [vampire.oitem_k_hannahs_safe_key] }
	__declspec(naked) void fitem_k_hitman_ji_key() { _asm jmp dword ptr [vampire.oitem_k_hitman_ji_key] }
	__declspec(naked) void fitem_k_hitman_lu_key() { _asm jmp dword ptr [vampire.oitem_k_hitman_lu_key] }
	__declspec(naked) void fitem_k_key_generic() { _asm jmp dword ptr [vampire.oitem_k_key_generic] }
	__declspec(naked) void fitem_k_kiki_key() { _asm jmp dword ptr [vampire.oitem_k_kiki_key] }
	__declspec(naked) void fitem_k_leopold_int_key() { _asm jmp dword ptr [vampire.oitem_k_leopold_int_key] }
	__declspec(naked) void fitem_k_lilly_key() { _asm jmp dword ptr [vampire.oitem_k_lilly_key] }
	__declspec(naked) void fitem_k_lucky_star_murder_key() { _asm jmp dword ptr [vampire.oitem_k_lucky_star_murder_key] }
	__declspec(naked) void fitem_k_malcolm_office_key() { _asm jmp dword ptr [vampire.oitem_k_malcolm_office_key] }
	__declspec(naked) void fitem_k_malkavian_refrigerator_key() { _asm jmp dword ptr [vampire.oitem_k_malkavian_refrigerator_key] }
	__declspec(naked) void fitem_k_murietta_key() { _asm jmp dword ptr [vampire.oitem_k_murietta_key] }
	__declspec(naked) void fitem_k_museum_basement_key() { _asm jmp dword ptr [vampire.oitem_k_museum_basement_key] }
	__declspec(naked) void fitem_k_museum_office_key() { _asm jmp dword ptr [vampire.oitem_k_museum_office_key] }
	__declspec(naked) void fitem_k_museum_storage_key() { _asm jmp dword ptr [vampire.oitem_k_museum_storage_key] }
	__declspec(naked) void fitem_k_museum_storeroom_key() { _asm jmp dword ptr [vampire.oitem_k_museum_storeroom_key] }
	__declspec(naked) void fitem_k_netcafe_office_key() { _asm jmp dword ptr [vampire.oitem_k_netcafe_office_key] }
	__declspec(naked) void fitem_k_oceanhouse_basement_key() { _asm jmp dword ptr [vampire.oitem_k_oceanhouse_basement_key] }
	__declspec(naked) void fitem_k_oceanhouse_sewer_key() { _asm jmp dword ptr [vampire.oitem_k_oceanhouse_sewer_key] }
	__declspec(naked) void fitem_k_oceanhouse_upstairs_key() { _asm jmp dword ptr [vampire.oitem_k_oceanhouse_upstairs_key] }
	__declspec(naked) void fitem_k_oh_front_key() { _asm jmp dword ptr [vampire.oitem_k_oh_front_key] }
	__declspec(naked) void fitem_k_sarcophagus_key() { _asm jmp dword ptr [vampire.oitem_k_sarcophagus_key] }
	__declspec(naked) void fitem_k_shrekhub_four_key() { _asm jmp dword ptr [vampire.oitem_k_shrekhub_four_key] }
	__declspec(naked) void fitem_k_shrekhub_one_key() { _asm jmp dword ptr [vampire.oitem_k_shrekhub_one_key] }
	__declspec(naked) void fitem_k_shrekhub_three_key() { _asm jmp dword ptr [vampire.oitem_k_shrekhub_three_key] }
	__declspec(naked) void fitem_k_skyline_haven_key() { _asm jmp dword ptr [vampire.oitem_k_skyline_haven_key] }
	__declspec(naked) void fitem_k_tatoo_parlor_key() { _asm jmp dword ptr [vampire.oitem_k_tatoo_parlor_key] }
	__declspec(naked) void fitem_k_tawni_apartment_key() { _asm jmp dword ptr [vampire.oitem_k_tawni_apartment_key] }
	__declspec(naked) void fitem_k_tutorial_chopshop_stairs_key() { _asm jmp dword ptr [vampire.oitem_k_tutorial_chopshop_stairs_key] }
	__declspec(naked) void fitem_m_money_clip() { _asm jmp dword ptr [vampire.oitem_m_money_clip] }
	__declspec(naked) void fitem_m_money_envelope() { _asm jmp dword ptr [vampire.oitem_m_money_envelope] }
	__declspec(naked) void fitem_m_wallet() { _asm jmp dword ptr [vampire.oitem_m_wallet] }
	__declspec(naked) void fitem_p_gargoyle_talisman() { _asm jmp dword ptr [vampire.oitem_p_gargoyle_talisman] }
	__declspec(naked) void fitem_p_occult_blood_buff() { _asm jmp dword ptr [vampire.oitem_p_occult_blood_buff] }
	__declspec(naked) void fitem_p_occult_dexterity() { _asm jmp dword ptr [vampire.oitem_p_occult_dexterity] }
	__declspec(naked) void fitem_p_occult_dodge() { _asm jmp dword ptr [vampire.oitem_p_occult_dodge] }
	__declspec(naked) void fitem_p_occult_experience() { _asm jmp dword ptr [vampire.oitem_p_occult_experience] }
	__declspec(naked) void fitem_p_occult_frenzy() { _asm jmp dword ptr [vampire.oitem_p_occult_frenzy] }
	__declspec(naked) void fitem_p_occult_hacking() { _asm jmp dword ptr [vampire.oitem_p_occult_hacking] }
	__declspec(naked) void fitem_p_occult_heal_rate() { _asm jmp dword ptr [vampire.oitem_p_occult_heal_rate] }
	__declspec(naked) void fitem_p_occult_lockpicking() { _asm jmp dword ptr [vampire.oitem_p_occult_lockpicking] }
	__declspec(naked) void fitem_p_occult_obfuscate() { _asm jmp dword ptr [vampire.oitem_p_occult_obfuscate] }
	__declspec(naked) void fitem_p_occult_passive_durations() { _asm jmp dword ptr [vampire.oitem_p_occult_passive_durations] }
	__declspec(naked) void fitem_p_occult_presence() { _asm jmp dword ptr [vampire.oitem_p_occult_presence] }
	__declspec(naked) void fitem_p_occult_regen() { _asm jmp dword ptr [vampire.oitem_p_occult_regen] }
	__declspec(naked) void fitem_p_occult_strength() { _asm jmp dword ptr [vampire.oitem_p_occult_strength] }
	__declspec(naked) void fitem_p_occult_thaum_damage() { _asm jmp dword ptr [vampire.oitem_p_occult_thaum_damage] }
	__declspec(naked) void fitem_p_research_hg_computers() { _asm jmp dword ptr [vampire.oitem_p_research_hg_computers] }
	__declspec(naked) void fitem_p_research_hg_dodge() { _asm jmp dword ptr [vampire.oitem_p_research_hg_dodge] }
	__declspec(naked) void fitem_p_research_hg_firearms() { _asm jmp dword ptr [vampire.oitem_p_research_hg_firearms] }
	__declspec(naked) void fitem_p_research_hg_melee() { _asm jmp dword ptr [vampire.oitem_p_research_hg_melee] }
	__declspec(naked) void fitem_p_research_lg_computers() { _asm jmp dword ptr [vampire.oitem_p_research_lg_computers] }
	__declspec(naked) void fitem_p_research_lg_dodge() { _asm jmp dword ptr [vampire.oitem_p_research_lg_dodge] }
	__declspec(naked) void fitem_p_research_lg_firearms() { _asm jmp dword ptr [vampire.oitem_p_research_lg_firearms] }
	__declspec(naked) void fitem_p_research_lg_stealth() { _asm jmp dword ptr [vampire.oitem_p_research_lg_stealth] }
	__declspec(naked) void fitem_p_research_mg_brawl() { _asm jmp dword ptr [vampire.oitem_p_research_mg_brawl] }
	__declspec(naked) void fitem_p_research_mg_finance() { _asm jmp dword ptr [vampire.oitem_p_research_mg_finance] }
	__declspec(naked) void fitem_p_research_mg_melee() { _asm jmp dword ptr [vampire.oitem_p_research_mg_melee] }
	__declspec(naked) void fitem_p_research_mg_security() { _asm jmp dword ptr [vampire.oitem_p_research_mg_security] }
	__declspec(naked) void fitem_w_avamp_blade() { _asm jmp dword ptr [vampire.oitem_w_avamp_blade] }
	__declspec(naked) void fitem_w_baseball_bat() { _asm jmp dword ptr [vampire.oitem_w_baseball_bat] }
	__declspec(naked) void fitem_w_baton() { _asm jmp dword ptr [vampire.oitem_w_baton] }
	__declspec(naked) void fitem_w_bush_hook() { _asm jmp dword ptr [vampire.oitem_w_bush_hook] }
	__declspec(naked) void fitem_w_chang_blade() { _asm jmp dword ptr [vampire.oitem_w_chang_blade] }
	__declspec(naked) void fitem_w_chang_claw() { _asm jmp dword ptr [vampire.oitem_w_chang_claw] }
	__declspec(naked) void fitem_w_chang_energy_ball() { _asm jmp dword ptr [vampire.oitem_w_chang_energy_ball] }
	__declspec(naked) void fitem_w_chang_ghost() { _asm jmp dword ptr [vampire.oitem_w_chang_ghost] }
	__declspec(naked) void fitem_w_claws() { _asm jmp dword ptr [vampire.oitem_w_claws] }
	__declspec(naked) void fitem_w_claws_ghoul() { _asm jmp dword ptr [vampire.oitem_w_claws_ghoul] }
	__declspec(naked) void fitem_w_claws_protean4() { _asm jmp dword ptr [vampire.oitem_w_claws_protean4] }
	__declspec(naked) void fitem_w_claws_protean5() { _asm jmp dword ptr [vampire.oitem_w_claws_protean5] }
	__declspec(naked) void fitem_w_colt_anaconda() { _asm jmp dword ptr [vampire.oitem_w_colt_anaconda] }
	__declspec(naked) void fitem_w_crossbow() { _asm jmp dword ptr [vampire.oitem_w_crossbow] }
	__declspec(naked) void fitem_w_crossbow_flaming() { _asm jmp dword ptr [vampire.oitem_w_crossbow_flaming] }
	__declspec(naked) void fitem_w_deserteagle() { _asm jmp dword ptr [vampire.oitem_w_deserteagle] }
	__declspec(naked) void fitem_w_fireaxe() { _asm jmp dword ptr [vampire.oitem_w_fireaxe] }
	__declspec(naked) void fitem_w_fists() { _asm jmp dword ptr [vampire.oitem_w_fists] }
	__declspec(naked) void fitem_w_flamethrower() { _asm jmp dword ptr [vampire.oitem_w_flamethrower] }
	__declspec(naked) void fitem_w_gargoyle_fist() { _asm jmp dword ptr [vampire.oitem_w_gargoyle_fist] }
	__declspec(naked) void fitem_w_glock_17c() { _asm jmp dword ptr [vampire.oitem_w_glock_17c] }
	__declspec(naked) void fitem_w_grenade_frag() { _asm jmp dword ptr [vampire.oitem_w_grenade_frag] }
	__declspec(naked) void fitem_w_hengeyokai_fist() { _asm jmp dword ptr [vampire.oitem_w_hengeyokai_fist] }
	__declspec(naked) void fitem_w_ithaca_m_37() { _asm jmp dword ptr [vampire.oitem_w_ithaca_m_37] }
	__declspec(naked) void fitem_w_katana() { _asm jmp dword ptr [vampire.oitem_w_katana] }
	__declspec(naked) void fitem_w_knife() { _asm jmp dword ptr [vampire.oitem_w_knife] }
	__declspec(naked) void fitem_w_mac_10() { _asm jmp dword ptr [vampire.oitem_w_mac_10] }
	__declspec(naked) void fitem_w_manbat_claw() { _asm jmp dword ptr [vampire.oitem_w_manbat_claw] }
	__declspec(naked) void fitem_w_mingxiao_melee() { _asm jmp dword ptr [vampire.oitem_w_mingxiao_melee] }
	__declspec(naked) void fitem_w_mingxiao_spit() { _asm jmp dword ptr [vampire.oitem_w_mingxiao_spit] }
	__declspec(naked) void fitem_w_mingxiao_tentacle() { _asm jmp dword ptr [vampire.oitem_w_mingxiao_tentacle] }
	__declspec(naked) void fitem_w_occultblade() { _asm jmp dword ptr [vampire.oitem_w_occultblade] }
	__declspec(naked) void fitem_w_rem_m_700_bach() { _asm jmp dword ptr [vampire.oitem_w_rem_m_700_bach] }
	__declspec(naked) void fitem_w_remington_m_700() { _asm jmp dword ptr [vampire.oitem_w_remington_m_700] }
	__declspec(naked) void fitem_w_sabbatleader_attack() { _asm jmp dword ptr [vampire.oitem_w_sabbatleader_attack] }
	__declspec(naked) void fitem_w_severed_arm() { _asm jmp dword ptr [vampire.oitem_w_severed_arm] }
	__declspec(naked) void fitem_w_sheriff_sword() { _asm jmp dword ptr [vampire.oitem_w_sheriff_sword] }
	__declspec(naked) void fitem_w_sledgehammer() { _asm jmp dword ptr [vampire.oitem_w_sledgehammer] }
	__declspec(naked) void fitem_w_steyr_aug() { _asm jmp dword ptr [vampire.oitem_w_steyr_aug] }
	__declspec(naked) void fitem_w_supershotgun() { _asm jmp dword ptr [vampire.oitem_w_supershotgun] }
	__declspec(naked) void fitem_w_thirtyeight() { _asm jmp dword ptr [vampire.oitem_w_thirtyeight] }
	__declspec(naked) void fitem_w_tire_iron() { _asm jmp dword ptr [vampire.oitem_w_tire_iron] }
	__declspec(naked) void fitem_w_torch() { _asm jmp dword ptr [vampire.oitem_w_torch] }
	__declspec(naked) void fitem_w_tzimisce2_claw() { _asm jmp dword ptr [vampire.oitem_w_tzimisce2_claw] }
	__declspec(naked) void fitem_w_tzimisce2_head() { _asm jmp dword ptr [vampire.oitem_w_tzimisce2_head] }
	__declspec(naked) void fitem_w_tzimisce3_claw() { _asm jmp dword ptr [vampire.oitem_w_tzimisce3_claw] }
	__declspec(naked) void fitem_w_tzimisce_melee() { _asm jmp dword ptr [vampire.oitem_w_tzimisce_melee] }
	__declspec(naked) void fitem_w_unarmed() { _asm jmp dword ptr [vampire.oitem_w_unarmed] }
	__declspec(naked) void fitem_w_uzi() { _asm jmp dword ptr [vampire.oitem_w_uzi] }
	__declspec(naked) void fitem_w_werewolf_attacks() { _asm jmp dword ptr [vampire.oitem_w_werewolf_attacks] }
	__declspec(naked) void fitem_w_zombie_fists() { _asm jmp dword ptr [vampire.oitem_w_zombie_fists] }
	__declspec(naked) void fkeyframe_rope() { _asm jmp dword ptr [vampire.okeyframe_rope] }
	__declspec(naked) void fkeyframe_track() { _asm jmp dword ptr [vampire.okeyframe_track] }
	__declspec(naked) void flight() { _asm jmp dword ptr [vampire.olight] }
	__declspec(naked) void flight_dynamic() { _asm jmp dword ptr [vampire.olight_dynamic] }
	__declspec(naked) void flight_environment() { _asm jmp dword ptr [vampire.olight_environment] }
	__declspec(naked) void flight_glspot() { _asm jmp dword ptr [vampire.olight_glspot] }
	__declspec(naked) void flight_spot() { _asm jmp dword ptr [vampire.olight_spot] }
	__declspec(naked) void flogic_auto() { _asm jmp dword ptr [vampire.ologic_auto] }
	__declspec(naked) void flogic_branch() { _asm jmp dword ptr [vampire.ologic_branch] }
	__declspec(naked) void flogic_case() { _asm jmp dword ptr [vampire.ologic_case] }
	__declspec(naked) void flogic_case_toggle() { _asm jmp dword ptr [vampire.ologic_case_toggle] }
	__declspec(naked) void flogic_choreographed_scene() { _asm jmp dword ptr [vampire.ologic_choreographed_scene] }
	__declspec(naked) void flogic_compare() { _asm jmp dword ptr [vampire.ologic_compare] }
	__declspec(naked) void flogic_lineto() { _asm jmp dword ptr [vampire.ologic_lineto] }
	__declspec(naked) void flogic_multicompare() { _asm jmp dword ptr [vampire.ologic_multicompare] }
	__declspec(naked) void flogic_npc_condition() { _asm jmp dword ptr [vampire.ologic_npc_condition] }
	__declspec(naked) void flogic_proximity() { _asm jmp dword ptr [vampire.ologic_proximity] }
	__declspec(naked) void flogic_pythoncheck() { _asm jmp dword ptr [vampire.ologic_pythoncheck] }
	__declspec(naked) void flogic_relay() { _asm jmp dword ptr [vampire.ologic_relay] }
	__declspec(naked) void flogic_squad_condition() { _asm jmp dword ptr [vampire.ologic_squad_condition] }
	__declspec(naked) void flogic_timer() { _asm jmp dword ptr [vampire.ologic_timer] }
	__declspec(naked) void flogic_visibility_test() { _asm jmp dword ptr [vampire.ologic_visibility_test] }
	__declspec(naked) void fmath_colorblend() { _asm jmp dword ptr [vampire.omath_colorblend] }
	__declspec(naked) void fmath_counter() { _asm jmp dword ptr [vampire.omath_counter] }
	__declspec(naked) void fmath_remap() { _asm jmp dword ptr [vampire.omath_remap] }
	__declspec(naked) void fmomentary_door() { _asm jmp dword ptr [vampire.omomentary_door] }
	__declspec(naked) void fmomentary_rot_button() { _asm jmp dword ptr [vampire.omomentary_rot_button] }
	__declspec(naked) void fmonster_generic() { _asm jmp dword ptr [vampire.omonster_generic] }
	__declspec(naked) void fmove_keyframed() { _asm jmp dword ptr [vampire.omove_keyframed] }
	__declspec(naked) void fmove_rope() { _asm jmp dword ptr [vampire.omove_rope] }
	__declspec(naked) void fmover_keyframe() { _asm jmp dword ptr [vampire.omover_keyframe] }
	__declspec(naked) void fmultisource() { _asm jmp dword ptr [vampire.omultisource] }
	__declspec(naked) void fnpc_TestBaseHumanoid() { _asm jmp dword ptr [vampire.onpc_TestBaseHumanoid] }
	__declspec(naked) void fnpc_VAndreiBlood() { _asm jmp dword ptr [vampire.onpc_VAndreiBlood] }
	__declspec(naked) void fnpc_VAnimal() { _asm jmp dword ptr [vampire.onpc_VAnimal] }
	__declspec(naked) void fnpc_VAsianVampire() { _asm jmp dword ptr [vampire.onpc_VAsianVampire] }
	__declspec(naked) void fnpc_VBach() { _asm jmp dword ptr [vampire.onpc_VBach] }
	__declspec(naked) void fnpc_VBatSwarm() { _asm jmp dword ptr [vampire.onpc_VBatSwarm] }
	__declspec(naked) void fnpc_VBrujah() { _asm jmp dword ptr [vampire.onpc_VBrujah] }
	__declspec(naked) void fnpc_VCamera() { _asm jmp dword ptr [vampire.onpc_VCamera] }
	__declspec(naked) void fnpc_VCameraSecurity() { _asm jmp dword ptr [vampire.onpc_VCameraSecurity] }
	__declspec(naked) void fnpc_VChangBros() { _asm jmp dword ptr [vampire.onpc_VChangBros] }
	__declspec(naked) void fnpc_VChangBrosBlade() { _asm jmp dword ptr [vampire.onpc_VChangBrosBlade] }
	__declspec(naked) void fnpc_VChangBrosClaw() { _asm jmp dword ptr [vampire.onpc_VChangBrosClaw] }
	__declspec(naked) void fnpc_VCombatman() { _asm jmp dword ptr [vampire.onpc_VCombatman] }
	__declspec(naked) void fnpc_VCop() { _asm jmp dword ptr [vampire.onpc_VCop] }
	__declspec(naked) void fnpc_VDialogPedestrian() { _asm jmp dword ptr [vampire.onpc_VDialogPedestrian] }
	__declspec(naked) void fnpc_VDog() { _asm jmp dword ptr [vampire.onpc_VDog] }
	__declspec(naked) void fnpc_VFrenzyShadow() { _asm jmp dword ptr [vampire.onpc_VFrenzyShadow] }
	__declspec(naked) void fnpc_VGangrel() { _asm jmp dword ptr [vampire.onpc_VGangrel] }
	__declspec(naked) void fnpc_VGargoyle() { _asm jmp dword ptr [vampire.onpc_VGargoyle] }
	__declspec(naked) void fnpc_VGhoulCroucher() { _asm jmp dword ptr [vampire.onpc_VGhoulCroucher] }
	__declspec(naked) void fnpc_VGuard1() { _asm jmp dword ptr [vampire.onpc_VGuard1] }
	__declspec(naked) void fnpc_VHengeyokai() { _asm jmp dword ptr [vampire.onpc_VHengeyokai] }
	__declspec(naked) void fnpc_VHuman() { _asm jmp dword ptr [vampire.onpc_VHuman] }
	__declspec(naked) void fnpc_VHumanCombatPatrol() { _asm jmp dword ptr [vampire.onpc_VHumanCombatPatrol] }
	__declspec(naked) void fnpc_VHumanCombatant() { _asm jmp dword ptr [vampire.onpc_VHumanCombatant] }
	__declspec(naked) void fnpc_VHunter() { _asm jmp dword ptr [vampire.onpc_VHunter] }
	__declspec(naked) void fnpc_VLasombra() { _asm jmp dword ptr [vampire.onpc_VLasombra] }
	__declspec(naked) void fnpc_VMalkavian() { _asm jmp dword ptr [vampire.onpc_VMalkavian] }
	__declspec(naked) void fnpc_VManBat() { _asm jmp dword ptr [vampire.onpc_VManBat] }
	__declspec(naked) void fnpc_VMercurio() { _asm jmp dword ptr [vampire.onpc_VMercurio] }
	__declspec(naked) void fnpc_VMingXiao() { _asm jmp dword ptr [vampire.onpc_VMingXiao] }
	__declspec(naked) void fnpc_VMingXiaoTentacle() { _asm jmp dword ptr [vampire.onpc_VMingXiaoTentacle] }
	__declspec(naked) void fnpc_VMoleman() { _asm jmp dword ptr [vampire.onpc_VMoleman] }
	__declspec(naked) void fnpc_VNewscaster() { _asm jmp dword ptr [vampire.onpc_VNewscaster] }
	__declspec(naked) void fnpc_VNosferatu() { _asm jmp dword ptr [vampire.onpc_VNosferatu] }
	__declspec(naked) void fnpc_VPedestrian() { _asm jmp dword ptr [vampire.onpc_VPedestrian] }
	__declspec(naked) void fnpc_VPlaceholder() { _asm jmp dword ptr [vampire.onpc_VPlaceholder] }
	__declspec(naked) void fnpc_VPlayerController() { _asm jmp dword ptr [vampire.onpc_VPlayerController] }
	__declspec(naked) void fnpc_VProneDialog() { _asm jmp dword ptr [vampire.onpc_VProneDialog] }
	__declspec(naked) void fnpc_VRat() { _asm jmp dword ptr [vampire.onpc_VRat] }
	__declspec(naked) void fnpc_VSabbatGunman() { _asm jmp dword ptr [vampire.onpc_VSabbatGunman] }
	__declspec(naked) void fnpc_VSabbatLeader() { _asm jmp dword ptr [vampire.onpc_VSabbatLeader] }
	__declspec(naked) void fnpc_VScurrying() { _asm jmp dword ptr [vampire.onpc_VScurrying] }
	__declspec(naked) void fnpc_VSheriffMan() { _asm jmp dword ptr [vampire.onpc_VSheriffMan] }
	__declspec(naked) void fnpc_VSheriffSwarm() { _asm jmp dword ptr [vampire.onpc_VSheriffSwarm] }
	__declspec(naked) void fnpc_VStalker() { _asm jmp dword ptr [vampire.onpc_VStalker] }
	__declspec(naked) void fnpc_VTaxiDriver() { _asm jmp dword ptr [vampire.onpc_VTaxiDriver] }
	__declspec(naked) void fnpc_VTest() { _asm jmp dword ptr [vampire.onpc_VTest] }
	__declspec(naked) void fnpc_VToreador() { _asm jmp dword ptr [vampire.onpc_VToreador] }
	__declspec(naked) void fnpc_VTremere() { _asm jmp dword ptr [vampire.onpc_VTremere] }
	__declspec(naked) void fnpc_VTzimisce() { _asm jmp dword ptr [vampire.onpc_VTzimisce] }
	__declspec(naked) void fnpc_VTzimisceHeadClaw() { _asm jmp dword ptr [vampire.onpc_VTzimisceHeadClaw] }
	__declspec(naked) void fnpc_VTzimisceRunner() { _asm jmp dword ptr [vampire.onpc_VTzimisceRunner] }
	__declspec(naked) void fnpc_VVampire() { _asm jmp dword ptr [vampire.onpc_VVampire] }
	__declspec(naked) void fnpc_VVampireBoss() { _asm jmp dword ptr [vampire.onpc_VVampireBoss] }
	__declspec(naked) void fnpc_VVentrue() { _asm jmp dword ptr [vampire.onpc_VVentrue] }
	__declspec(naked) void fnpc_VWerewolf() { _asm jmp dword ptr [vampire.onpc_VWerewolf] }
	__declspec(naked) void fnpc_VWolfMorph() { _asm jmp dword ptr [vampire.onpc_VWolfMorph] }
	__declspec(naked) void fnpc_VYukie() { _asm jmp dword ptr [vampire.onpc_VYukie] }
	__declspec(naked) void fnpc_VZombie() { _asm jmp dword ptr [vampire.onpc_VZombie] }
	__declspec(naked) void fnpc_bullseye() { _asm jmp dword ptr [vampire.onpc_bullseye] }
	__declspec(naked) void fnpc_crow() { _asm jmp dword ptr [vampire.onpc_crow] }
	__declspec(naked) void fnpc_generic() { _asm jmp dword ptr [vampire.onpc_generic] }
	__declspec(naked) void fnpc_generic_bathack() { _asm jmp dword ptr [vampire.onpc_generic_bathack] }
	__declspec(naked) void fnpc_maker() { _asm jmp dword ptr [vampire.onpc_maker] }
	__declspec(naked) void fnpc_maker_fleshpile() { _asm jmp dword ptr [vampire.onpc_maker_fleshpile] }
	__declspec(naked) void fnpc_maker_zombie() { _asm jmp dword ptr [vampire.onpc_maker_zombie] }
	__declspec(naked) void fnpc_payphone() { _asm jmp dword ptr [vampire.onpc_payphone] }
	__declspec(naked) void fnpc_sabbat() { _asm jmp dword ptr [vampire.onpc_sabbat] }
	__declspec(naked) void fparams_explosion() { _asm jmp dword ptr [vampire.oparams_explosion] }
	__declspec(naked) void fparams_particle() { _asm jmp dword ptr [vampire.oparams_particle] }
	__declspec(naked) void fpath_corner() { _asm jmp dword ptr [vampire.opath_corner] }
	__declspec(naked) void fpath_corner_crash() { _asm jmp dword ptr [vampire.opath_corner_crash] }
	__declspec(naked) void fphys_animlink() { _asm jmp dword ptr [vampire.ophys_animlink] }
	__declspec(naked) void fphys_ballsocket() { _asm jmp dword ptr [vampire.ophys_ballsocket] }
	__declspec(naked) void fphys_constraint() { _asm jmp dword ptr [vampire.ophys_constraint] }
	__declspec(naked) void fphys_constraintsystem() { _asm jmp dword ptr [vampire.ophys_constraintsystem] }
	__declspec(naked) void fphys_convert() { _asm jmp dword ptr [vampire.ophys_convert] }
	__declspec(naked) void fphys_hinge() { _asm jmp dword ptr [vampire.ophys_hinge] }
	__declspec(naked) void fphys_keepupright() { _asm jmp dword ptr [vampire.ophys_keepupright] }
	__declspec(naked) void fphys_motor() { _asm jmp dword ptr [vampire.ophys_motor] }
	__declspec(naked) void fphys_pulleyconstraint() { _asm jmp dword ptr [vampire.ophys_pulleyconstraint] }
	__declspec(naked) void fphys_slideconstraint() { _asm jmp dword ptr [vampire.ophys_slideconstraint] }
	__declspec(naked) void fphys_spring() { _asm jmp dword ptr [vampire.ophys_spring] }
	__declspec(naked) void fphys_thruster() { _asm jmp dword ptr [vampire.ophys_thruster] }
	__declspec(naked) void fphys_torque() { _asm jmp dword ptr [vampire.ophys_torque] }
	__declspec(naked) void fphysics_cannister() { _asm jmp dword ptr [vampire.ophysics_cannister] }
	__declspec(naked) void fphysics_prop() { _asm jmp dword ptr [vampire.ophysics_prop] }
	__declspec(naked) void fphysics_prop_ragdoll() { _asm jmp dword ptr [vampire.ophysics_prop_ragdoll] }
	__declspec(naked) void fplayer() { _asm jmp dword ptr [vampire.oplayer] }
	__declspec(naked) void fplayer_loadsaved() { _asm jmp dword ptr [vampire.oplayer_loadsaved] }
	__declspec(naked) void fplayer_manager() { _asm jmp dword ptr [vampire.oplayer_manager] }
	__declspec(naked) void fplayer_pickup() { _asm jmp dword ptr [vampire.oplayer_pickup] }
	__declspec(naked) void fplayer_weaponstrip() { _asm jmp dword ptr [vampire.oplayer_weaponstrip] }
	__declspec(naked) void fplayerevents() { _asm jmp dword ptr [vampire.oplayerevents] }
	__declspec(naked) void fpoint_anglesensor() { _asm jmp dword ptr [vampire.opoint_anglesensor] }
	__declspec(naked) void fpoint_camera() { _asm jmp dword ptr [vampire.opoint_camera] }
	__declspec(naked) void fpoint_explosion() { _asm jmp dword ptr [vampire.opoint_explosion] }
	__declspec(naked) void fpoint_hurt() { _asm jmp dword ptr [vampire.opoint_hurt] }
	__declspec(naked) void fpoint_target() { _asm jmp dword ptr [vampire.opoint_target] }
	__declspec(naked) void fpoint_teleport() { _asm jmp dword ptr [vampire.opoint_teleport] }
	__declspec(naked) void fprop_base() { _asm jmp dword ptr [vampire.oprop_base] }
	__declspec(naked) void fprop_button() { _asm jmp dword ptr [vampire.oprop_button] }
	__declspec(naked) void fprop_clockhand() { _asm jmp dword ptr [vampire.oprop_clockhand] }
	__declspec(naked) void fprop_destructable() { _asm jmp dword ptr [vampire.oprop_destructable] }
	__declspec(naked) void fprop_doorknob() { _asm jmp dword ptr [vampire.oprop_doorknob] }
	__declspec(naked) void fprop_doorknob_electronic() { _asm jmp dword ptr [vampire.oprop_doorknob_electronic] }
	__declspec(naked) void fprop_dynamic() { _asm jmp dword ptr [vampire.oprop_dynamic] }
	__declspec(naked) void fprop_dynamic_ornament() { _asm jmp dword ptr [vampire.oprop_dynamic_ornament] }
	__declspec(naked) void fprop_hacking() { _asm jmp dword ptr [vampire.oprop_hacking] }
	__declspec(naked) void fprop_haunted() { _asm jmp dword ptr [vampire.oprop_haunted] }
	__declspec(naked) void fprop_keypad() { _asm jmp dword ptr [vampire.oprop_keypad] }
	__declspec(naked) void fprop_largehull_ignore() { _asm jmp dword ptr [vampire.oprop_largehull_ignore] }
	__declspec(naked) void fprop_model_state() { _asm jmp dword ptr [vampire.oprop_model_state] }
	__declspec(naked) void fprop_mover() { _asm jmp dword ptr [vampire.oprop_mover] }
	__declspec(naked) void fprop_padlock() { _asm jmp dword ptr [vampire.oprop_padlock] }
	__declspec(naked) void fprop_physics() { _asm jmp dword ptr [vampire.oprop_physics] }
	__declspec(naked) void fprop_physics_contested() { _asm jmp dword ptr [vampire.oprop_physics_contested] }
	__declspec(naked) void fprop_radio() { _asm jmp dword ptr [vampire.oprop_radio] }
	__declspec(naked) void fprop_ragdoll() { _asm jmp dword ptr [vampire.oprop_ragdoll] }
	__declspec(naked) void fprop_ragdoll_attached() { _asm jmp dword ptr [vampire.oprop_ragdoll_attached] }
	__declspec(naked) void fprop_ragdoll_special() { _asm jmp dword ptr [vampire.oprop_ragdoll_special] }
	__declspec(naked) void fprop_sign() { _asm jmp dword ptr [vampire.oprop_sign] }
	__declspec(naked) void fprop_slashable() { _asm jmp dword ptr [vampire.oprop_slashable] }
	__declspec(naked) void fprop_switch() { _asm jmp dword ptr [vampire.oprop_switch] }
	__declspec(naked) void fraggib() { _asm jmp dword ptr [vampire.oraggib] }
	__declspec(naked) void fscripted_scene() { _asm jmp dword ptr [vampire.oscripted_scene] }
	__declspec(naked) void fscripted_sentence() { _asm jmp dword ptr [vampire.oscripted_sentence] }
	__declspec(naked) void fscripted_sequence() { _asm jmp dword ptr [vampire.oscripted_sequence] }
	__declspec(naked) void fscripted_target() { _asm jmp dword ptr [vampire.oscripted_target] }
	__declspec(naked) void fsecurity_camera() { _asm jmp dword ptr [vampire.osecurity_camera] }
	__declspec(naked) void fsheriff_teleport_bats() { _asm jmp dword ptr [vampire.osheriff_teleport_bats] }
	__declspec(naked) void fsimple_physics_brush() { _asm jmp dword ptr [vampire.osimple_physics_brush] }
	__declspec(naked) void fsimple_physics_prop() { _asm jmp dword ptr [vampire.osimple_physics_prop] }
	__declspec(naked) void fsky_camera() { _asm jmp dword ptr [vampire.osky_camera] }
	__declspec(naked) void fsoundent() { _asm jmp dword ptr [vampire.osoundent] }
	__declspec(naked) void fspeaker() { _asm jmp dword ptr [vampire.ospeaker] }
	__declspec(naked) void fte_tester() { _asm jmp dword ptr [vampire.ote_tester] }
	__declspec(naked) void ftectonic() { _asm jmp dword ptr [vampire.otectonic] }
	__declspec(naked) void ftest_traceline() { _asm jmp dword ptr [vampire.otest_traceline] }
	__declspec(naked) void ftrigger() { _asm jmp dword ptr [vampire.otrigger] }
	__declspec(naked) void ftrigger_autosave() { _asm jmp dword ptr [vampire.otrigger_autosave] }
	__declspec(naked) void ftrigger_bomb_site() { _asm jmp dword ptr [vampire.otrigger_bomb_site] }
	__declspec(naked) void ftrigger_brush() { _asm jmp dword ptr [vampire.otrigger_brush] }
	__declspec(naked) void ftrigger_changelevel() { _asm jmp dword ptr [vampire.otrigger_changelevel] }
	__declspec(naked) void ftrigger_checkvolume() { _asm jmp dword ptr [vampire.otrigger_checkvolume] }
	__declspec(naked) void ftrigger_discipline_context() { _asm jmp dword ptr [vampire.otrigger_discipline_context] }
	__declspec(naked) void ftrigger_electric_bugaloo() { _asm jmp dword ptr [vampire.otrigger_electric_bugaloo] }
	__declspec(naked) void ftrigger_environmental_audio() { _asm jmp dword ptr [vampire.otrigger_environmental_audio] }
	__declspec(naked) void ftrigger_fog() { _asm jmp dword ptr [vampire.otrigger_fog] }
	__declspec(naked) void ftrigger_hurt() { _asm jmp dword ptr [vampire.otrigger_hurt] }
	__declspec(naked) void ftrigger_impact() { _asm jmp dword ptr [vampire.otrigger_impact] }
	__declspec(naked) void ftrigger_inventory_check() { _asm jmp dword ptr [vampire.otrigger_inventory_check] }
	__declspec(naked) void ftrigger_look() { _asm jmp dword ptr [vampire.otrigger_look] }
	__declspec(naked) void ftrigger_multiple() { _asm jmp dword ptr [vampire.otrigger_multiple] }
	__declspec(naked) void ftrigger_once() { _asm jmp dword ptr [vampire.otrigger_once] }
	__declspec(naked) void ftrigger_player_activity_level() { _asm jmp dword ptr [vampire.otrigger_player_activity_level] }
	__declspec(naked) void ftrigger_proximity() { _asm jmp dword ptr [vampire.otrigger_proximity] }
	__declspec(naked) void ftrigger_push() { _asm jmp dword ptr [vampire.otrigger_push] }
	__declspec(naked) void ftrigger_small_hull() { _asm jmp dword ptr [vampire.otrigger_small_hull] }
	__declspec(naked) void ftrigger_stealth_mod() { _asm jmp dword ptr [vampire.otrigger_stealth_mod] }
	__declspec(naked) void ftrigger_teleport() { _asm jmp dword ptr [vampire.otrigger_teleport] }
	__declspec(naked) void ftrigger_transition() { _asm jmp dword ptr [vampire.otrigger_transition] }
	__declspec(naked) void ftrigger_werewolf_zone() { _asm jmp dword ptr [vampire.otrigger_werewolf_zone] }
	__declspec(naked) void ftrigger_wind() { _asm jmp dword ptr [vampire.otrigger_wind] }
	__declspec(naked) void fvampire_skill() { _asm jmp dword ptr [vampire.ovampire_skill] }
	__declspec(naked) void fvampireprojectile() { _asm jmp dword ptr [vampire.ovampireprojectile] }
	__declspec(naked) void fvampireprojectile_mingxiaospit() { _asm jmp dword ptr [vampire.ovampireprojectile_mingxiaospit] }
	__declspec(naked) void fvdisciplineprojectile() { _asm jmp dword ptr [vampire.ovdisciplineprojectile] }
	__declspec(naked) void fvgui_screen() { _asm jmp dword ptr [vampire.ovgui_screen] }
	__declspec(naked) void fviewmodel() { _asm jmp dword ptr [vampire.oviewmodel] }
	__declspec(naked) void fweapon_physcannon() { _asm jmp dword ptr [vampire.oweapon_physcannon] }
	__declspec(naked) void fwindow_pane() { _asm jmp dword ptr [vampire.owindow_pane] }
	__declspec(naked) void fworldevents() { _asm jmp dword ptr [vampire.oworldevents] }
	__declspec(naked) void fworldspawn() { _asm jmp dword ptr [vampire.oworldspawn] }
}

void setupFunctions() {
	vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_0Decode = GetProcAddress(vampire.dll, "CDAPFN0506_CDAPFN0506_X_SECURE_BASE_0Decode");
	vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_0Encode = GetProcAddress(vampire.dll, "CDAPFN0506_CDAPFN0506_X_SECURE_BASE_0Encode");
	vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_1Decode = GetProcAddress(vampire.dll, "CDAPFN0506_CDAPFN0506_X_SECURE_BASE_1Decode");
	vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_1Encode = GetProcAddress(vampire.dll, "CDAPFN0506_CDAPFN0506_X_SECURE_BASE_1Encode");
	vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_2Decode = GetProcAddress(vampire.dll, "CDAPFN0506_CDAPFN0506_X_SECURE_BASE_2Decode");
	vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_2Encode = GetProcAddress(vampire.dll, "CDAPFN0506_CDAPFN0506_X_SECURE_BASE_2Encode");
	vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_3Decode = GetProcAddress(vampire.dll, "CDAPFN0506_CDAPFN0506_X_SECURE_BASE_3Decode");
	vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_3Encode = GetProcAddress(vampire.dll, "CDAPFN0506_CDAPFN0506_X_SECURE_BASE_3Encode");
	vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_4Decode = GetProcAddress(vampire.dll, "CDAPFN0506_CDAPFN0506_X_SECURE_BASE_4Decode");
	vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_4Encode = GetProcAddress(vampire.dll, "CDAPFN0506_CDAPFN0506_X_SECURE_BASE_4Encode");
	vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_5Decode = GetProcAddress(vampire.dll, "CDAPFN0506_CDAPFN0506_X_SECURE_BASE_5Decode");
	vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_5Encode = GetProcAddress(vampire.dll, "CDAPFN0506_CDAPFN0506_X_SECURE_BASE_5Encode");
	vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_6Decode = GetProcAddress(vampire.dll, "CDAPFN0506_CDAPFN0506_X_SECURE_BASE_6Decode");
	vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_6Encode = GetProcAddress(vampire.dll, "CDAPFN0506_CDAPFN0506_X_SECURE_BASE_6Encode");
	vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_7Decode = GetProcAddress(vampire.dll, "CDAPFN0506_CDAPFN0506_X_SECURE_BASE_7Decode");
	vampire.oCDAPFN0506_CDAPFN0506_X_SECURE_BASE_7Encode = GetProcAddress(vampire.dll, "CDAPFN0506_CDAPFN0506_X_SECURE_BASE_7Encode");
	vampire.oCDAPFN0506_SECURE_BASE_0Decode = GetProcAddress(vampire.dll, "CDAPFN0506_SECURE_BASE_0Decode");
	vampire.oCDAPFN0506_SECURE_BASE_0Encode = GetProcAddress(vampire.dll, "CDAPFN0506_SECURE_BASE_0Encode");
	vampire.oCDAPFN0506_SECURE_BASE_1Decode = GetProcAddress(vampire.dll, "CDAPFN0506_SECURE_BASE_1Decode");
	vampire.oCDAPFN0506_SECURE_BASE_1Encode = GetProcAddress(vampire.dll, "CDAPFN0506_SECURE_BASE_1Encode");
	vampire.oCDAPFN0506_SECURE_BASE_2Decode = GetProcAddress(vampire.dll, "CDAPFN0506_SECURE_BASE_2Decode");
	vampire.oCDAPFN0506_SECURE_BASE_2Encode = GetProcAddress(vampire.dll, "CDAPFN0506_SECURE_BASE_2Encode");
	vampire.oCDAPFN0506_SECURE_BASE_3Decode = GetProcAddress(vampire.dll, "CDAPFN0506_SECURE_BASE_3Decode");
	vampire.oCDAPFN0506_SECURE_BASE_3Encode = GetProcAddress(vampire.dll, "CDAPFN0506_SECURE_BASE_3Encode");
	vampire.oCDAPFN0506_SECURE_BASE_4Decode = GetProcAddress(vampire.dll, "CDAPFN0506_SECURE_BASE_4Decode");
	vampire.oCDAPFN0506_SECURE_BASE_4Encode = GetProcAddress(vampire.dll, "CDAPFN0506_SECURE_BASE_4Encode");
	vampire.oCDAPFN0506_SECURE_BASE_5Decode = GetProcAddress(vampire.dll, "CDAPFN0506_SECURE_BASE_5Decode");
	vampire.oCDAPFN0506_SECURE_BASE_5Encode = GetProcAddress(vampire.dll, "CDAPFN0506_SECURE_BASE_5Encode");
	vampire.oCDAPFN0506_SECURE_BASE_6Decode = GetProcAddress(vampire.dll, "CDAPFN0506_SECURE_BASE_6Decode");
	vampire.oCDAPFN0506_SECURE_BASE_6Encode = GetProcAddress(vampire.dll, "CDAPFN0506_SECURE_BASE_6Encode");
	vampire.oCDAPFN0506_SECURE_BASE_7Decode = GetProcAddress(vampire.dll, "CDAPFN0506_SECURE_BASE_7Decode");
	vampire.oCDAPFN0506_SECURE_BASE_7Encode = GetProcAddress(vampire.dll, "CDAPFN0506_SECURE_BASE_7Encode");
	vampire.oCreateInterface = GetProcAddress(vampire.dll, "CreateInterface");
	vampire.o_firesmoke = GetProcAddress(vampire.dll, "_firesmoke");
	vampire.oactivity_copy_prop = GetProcAddress(vampire.dll, "activity_copy_prop");
	vampire.oai_changehintgroup = GetProcAddress(vampire.dll, "ai_changehintgroup");
	vampire.oai_changetarget = GetProcAddress(vampire.dll, "ai_changetarget");
	vampire.oai_goal_standoff = GetProcAddress(vampire.dll, "ai_goal_standoff");
	vampire.oai_hint = GetProcAddress(vampire.dll, "ai_hint");
	vampire.oai_network = GetProcAddress(vampire.dll, "ai_network");
	vampire.oai_sound = GetProcAddress(vampire.dll, "ai_sound");
	vampire.oaiscripted_schedule = GetProcAddress(vampire.dll, "aiscripted_schedule");
	vampire.oaiscripted_sequence = GetProcAddress(vampire.dll, "aiscripted_sequence");
	vampire.oaitesthull = GetProcAddress(vampire.dll, "aitesthull");
	vampire.oambient_generic = GetProcAddress(vampire.dll, "ambient_generic");
	vampire.oambient_soundscheme = GetProcAddress(vampire.dll, "ambient_soundscheme");
	vampire.oauspex_aura = GetProcAddress(vampire.dll, "auspex_aura");
	vampire.obeam = GetProcAddress(vampire.dll, "beam");
	vampire.obodyque = GetProcAddress(vampire.dll, "bodyque");
	vampire.ocamera_animated = GetProcAddress(vampire.dll, "camera_animated");
	vampire.ocamera_cinematic = GetProcAddress(vampire.dll, "camera_cinematic");
	vampire.ocamera_keyframe = GetProcAddress(vampire.dll, "camera_keyframe");
	vampire.ocamera_track = GetProcAddress(vampire.dll, "camera_track");
	vampire.odebug_entity = GetProcAddress(vampire.dll, "debug_entity");
	vampire.odisc_particle = GetProcAddress(vampire.dll, "disc_particle");
	vampire.odynamic_prop = GetProcAddress(vampire.dll, "dynamic_prop");
	vampire.oentityflame = GetProcAddress(vampire.dll, "entityflame");
	vampire.oenv_beam = GetProcAddress(vampire.dll, "env_beam");
	vampire.oenv_dustpuff = GetProcAddress(vampire.dll, "env_dustpuff");
	vampire.oenv_fade = GetProcAddress(vampire.dll, "env_fade");
	vampire.oenv_fire = GetProcAddress(vampire.dll, "env_fire");
	vampire.oenv_firesensor = GetProcAddress(vampire.dll, "env_firesensor");
	vampire.oenv_firesource = GetProcAddress(vampire.dll, "env_firesource");
	vampire.oenv_floating_camera = GetProcAddress(vampire.dll, "env_floating_camera");
	vampire.oenv_fog_controller = GetProcAddress(vampire.dll, "env_fog_controller");
	vampire.oenv_global = GetProcAddress(vampire.dll, "env_global");
	vampire.oenv_glow = GetProcAddress(vampire.dll, "env_glow");
	vampire.oenv_laser = GetProcAddress(vampire.dll, "env_laser");
	vampire.oenv_message = GetProcAddress(vampire.dll, "env_message");
	vampire.oenv_microphone = GetProcAddress(vampire.dll, "env_microphone");
	vampire.oenv_particle = GetProcAddress(vampire.dll, "env_particle");
	vampire.oenv_particle_hud = GetProcAddress(vampire.dll, "env_particle_hud");
	vampire.oenv_physexplosion = GetProcAddress(vampire.dll, "env_physexplosion");
	vampire.oenv_physimpact = GetProcAddress(vampire.dll, "env_physimpact");
	vampire.oenv_player_surface_trigger = GetProcAddress(vampire.dll, "env_player_surface_trigger");
	vampire.oenv_shake = GetProcAddress(vampire.dll, "env_shake");
	vampire.oenv_shooter = GetProcAddress(vampire.dll, "env_shooter");
	vampire.oenv_soundscape = GetProcAddress(vampire.dll, "env_soundscape");
	vampire.oenv_spark = GetProcAddress(vampire.dll, "env_spark");
	vampire.oenv_sprite = GetProcAddress(vampire.dll, "env_sprite");
	vampire.oenv_steam = GetProcAddress(vampire.dll, "env_steam");
	vampire.oenv_steamjet = GetProcAddress(vampire.dll, "env_steamjet");
	vampire.oenv_sun = GetProcAddress(vampire.dll, "env_sun");
	vampire.oenv_swarm_bats = GetProcAddress(vampire.dll, "env_swarm_bats");
	vampire.oenv_terrainmorph = GetProcAddress(vampire.dll, "env_terrainmorph");
	vampire.oenv_wind = GetProcAddress(vampire.dll, "env_wind");
	vampire.oevents_player = GetProcAddress(vampire.dll, "events_player");
	vampire.oevents_world = GetProcAddress(vampire.dll, "events_world");
	vampire.ofilter_activator_class = GetProcAddress(vampire.dll, "filter_activator_class");
	vampire.ofilter_activator_feat = GetProcAddress(vampire.dll, "filter_activator_feat");
	vampire.ofilter_activator_inventory = GetProcAddress(vampire.dll, "filter_activator_inventory");
	vampire.ofilter_activator_mass = GetProcAddress(vampire.dll, "filter_activator_mass");
	vampire.ofilter_activator_name = GetProcAddress(vampire.dll, "filter_activator_name");
	vampire.ofilter_base = GetProcAddress(vampire.dll, "filter_base");
	vampire.ofilter_multi = GetProcAddress(vampire.dll, "filter_multi");
	vampire.oflame_cluster = GetProcAddress(vampire.dll, "flame_cluster");
	vampire.ofunCBaseFlex = GetProcAddress(vampire.dll, "funCBaseFlex");
	vampire.ofunc_areaportal = GetProcAddress(vampire.dll, "func_areaportal");
	vampire.ofunc_areaportalwindow = GetProcAddress(vampire.dll, "func_areaportalwindow");
	vampire.ofunc_breakable = GetProcAddress(vampire.dll, "func_breakable");
	vampire.ofunc_breakable_surf = GetProcAddress(vampire.dll, "func_breakable_surf");
	vampire.ofunc_brush = GetProcAddress(vampire.dll, "func_brush");
	vampire.ofunc_button = GetProcAddress(vampire.dll, "func_button");
	vampire.ofunc_door = GetProcAddress(vampire.dll, "func_door");
	vampire.ofunc_door_rotating = GetProcAddress(vampire.dll, "func_door_rotating");
	vampire.ofunc_dustcloud = GetProcAddress(vampire.dll, "func_dustcloud");
	vampire.ofunc_dustmotes = GetProcAddress(vampire.dll, "func_dustmotes");
	vampire.ofunc_elevator = GetProcAddress(vampire.dll, "func_elevator");
	vampire.ofunc_illusionary = GetProcAddress(vampire.dll, "func_illusionary");
	vampire.ofunc_keyframed_mover = GetProcAddress(vampire.dll, "func_keyframed_mover");
	vampire.ofunc_lod = GetProcAddress(vampire.dll, "func_lod");
	vampire.ofunc_monitor = GetProcAddress(vampire.dll, "func_monitor");
	vampire.ofunc_movelinear = GetProcAddress(vampire.dll, "func_movelinear");
	vampire.ofunc_particle = GetProcAddress(vampire.dll, "func_particle");
	vampire.ofunc_physbox = GetProcAddress(vampire.dll, "func_physbox");
	vampire.ofunc_plat = GetProcAddress(vampire.dll, "func_plat");
	vampire.ofunc_platrot = GetProcAddress(vampire.dll, "func_platrot");
	vampire.ofunc_pushable = GetProcAddress(vampire.dll, "func_pushable");
	vampire.ofunc_rot_button = GetProcAddress(vampire.dll, "func_rot_button");
	vampire.ofunc_rotating = GetProcAddress(vampire.dll, "func_rotating");
	vampire.ofunc_wall = GetProcAddress(vampire.dll, "func_wall");
	vampire.ogame_sign = GetProcAddress(vampire.dll, "game_sign");
	vampire.ogame_text = GetProcAddress(vampire.dll, "game_text");
	vampire.ogame_ui = GetProcAddress(vampire.dll, "game_ui");
	vampire.ogib = GetProcAddress(vampire.dll, "gib");
	vampire.ogibshooter = GetProcAddress(vampire.dll, "gibshooter");
	vampire.ogravity_pellet = GetProcAddress(vampire.dll, "gravity_pellet");
	vampire.ogrenade = GetProcAddress(vampire.dll, "grenade");
	vampire.ohud_counter = GetProcAddress(vampire.dll, "hud_counter");
	vampire.ohud_image = GetProcAddress(vampire.dll, "hud_image");
	vampire.ohud_timer = GetProcAddress(vampire.dll, "hud_timer");
	vampire.oinfo_constraint_anchor = GetProcAddress(vampire.dll, "info_constraint_anchor");
	vampire.oinfo_hint = GetProcAddress(vampire.dll, "info_hint");
	vampire.oinfo_intermission = GetProcAddress(vampire.dll, "info_intermission");
	vampire.oinfo_landmark = GetProcAddress(vampire.dll, "info_landmark");
	vampire.oinfo_node = GetProcAddress(vampire.dll, "info_node");
	vampire.oinfo_node_air = GetProcAddress(vampire.dll, "info_node_air");
	vampire.oinfo_node_air_hint = GetProcAddress(vampire.dll, "info_node_air_hint");
	vampire.oinfo_node_bach_run_1 = GetProcAddress(vampire.dll, "info_node_bach_run_1");
	vampire.oinfo_node_bach_run_2 = GetProcAddress(vampire.dll, "info_node_bach_run_2");
	vampire.oinfo_node_bach_teleport_1 = GetProcAddress(vampire.dll, "info_node_bach_teleport_1");
	vampire.oinfo_node_bach_teleport_2 = GetProcAddress(vampire.dll, "info_node_bach_teleport_2");
	vampire.oinfo_node_bach_teleport_3 = GetProcAddress(vampire.dll, "info_node_bach_teleport_3");
	vampire.oinfo_node_bach_teleport_4 = GetProcAddress(vampire.dll, "info_node_bach_teleport_4");
	vampire.oinfo_node_chang_column = GetProcAddress(vampire.dll, "info_node_chang_column");
	vampire.oinfo_node_chang_jumpbase = GetProcAddress(vampire.dll, "info_node_chang_jumpbase");
	vampire.oinfo_node_chang_ledge = GetProcAddress(vampire.dll, "info_node_chang_ledge");
	vampire.oinfo_node_chang_teleport = GetProcAddress(vampire.dll, "info_node_chang_teleport");
	vampire.oinfo_node_climb = GetProcAddress(vampire.dll, "info_node_climb");
	vampire.oinfo_node_cover_corner = GetProcAddress(vampire.dll, "info_node_cover_corner");
	vampire.oinfo_node_cover_low = GetProcAddress(vampire.dll, "info_node_cover_low");
	vampire.oinfo_node_cover_med = GetProcAddress(vampire.dll, "info_node_cover_med");
	vampire.oinfo_node_crosswalk = GetProcAddress(vampire.dll, "info_node_crosswalk");
	vampire.oinfo_node_hint = GetProcAddress(vampire.dll, "info_node_hint");
	vampire.oinfo_node_kick_at = GetProcAddress(vampire.dll, "info_node_kick_at");
	vampire.oinfo_node_kick_over = GetProcAddress(vampire.dll, "info_node_kick_over");
	vampire.oinfo_node_link = GetProcAddress(vampire.dll, "info_node_link");
	vampire.oinfo_node_manbat_fly_to_point = GetProcAddress(vampire.dll, "info_node_manbat_fly_to_point");
	vampire.oinfo_node_patrol_point = GetProcAddress(vampire.dll, "info_node_patrol_point");
	vampire.oinfo_node_sabbat_arch = GetProcAddress(vampire.dll, "info_node_sabbat_arch");
	vampire.oinfo_node_sabbat_bottom = GetProcAddress(vampire.dll, "info_node_sabbat_bottom");
	vampire.oinfo_node_sabbat_dive = GetProcAddress(vampire.dll, "info_node_sabbat_dive");
	vampire.oinfo_node_sabbat_hide = GetProcAddress(vampire.dll, "info_node_sabbat_hide");
	vampire.oinfo_node_sabbat_nojump = GetProcAddress(vampire.dll, "info_node_sabbat_nojump");
	vampire.oinfo_node_sabbat_top = GetProcAddress(vampire.dll, "info_node_sabbat_top");
	vampire.oinfo_node_shoot_at = GetProcAddress(vampire.dll, "info_node_shoot_at");
	vampire.oinfo_node_tzimisce = GetProcAddress(vampire.dll, "info_node_tzimisce");
	vampire.oinfo_node_tzimisce_claw_left = GetProcAddress(vampire.dll, "info_node_tzimisce_claw_left");
	vampire.oinfo_node_tzimisce_claw_right = GetProcAddress(vampire.dll, "info_node_tzimisce_claw_right");
	vampire.oinfo_node_werewolf = GetProcAddress(vampire.dll, "info_node_werewolf");
	vampire.oinfo_node_werewolf_hint = GetProcAddress(vampire.dll, "info_node_werewolf_hint");
	vampire.oinfo_null = GetProcAddress(vampire.dll, "info_null");
	vampire.oinfo_player_deathmatch = GetProcAddress(vampire.dll, "info_player_deathmatch");
	vampire.oinfo_player_start = GetProcAddress(vampire.dll, "info_player_start");
	vampire.oinfo_target = GetProcAddress(vampire.dll, "info_target");
	vampire.oinfo_teleport_destination = GetProcAddress(vampire.dll, "info_teleport_destination");
	vampire.oinfodecal = GetProcAddress(vampire.dll, "infodecal");
	vampire.oinspection_brush = GetProcAddress(vampire.dll, "inspection_brush");
	vampire.oinspection_node = GetProcAddress(vampire.dll, "inspection_node");
	vampire.oinstanced_scripted_scene = GetProcAddress(vampire.dll, "instanced_scripted_scene");
	vampire.ointersting_place = GetProcAddress(vampire.dll, "intersting_place");
	vampire.ointersting_place_conversation = GetProcAddress(vampire.dll, "intersting_place_conversation");
	vampire.oitem_a_body_armor = GetProcAddress(vampire.dll, "item_a_body_armor");
	vampire.oitem_a_hvy_cloth = GetProcAddress(vampire.dll, "item_a_hvy_cloth");
	vampire.oitem_a_hvy_leather = GetProcAddress(vampire.dll, "item_a_hvy_leather");
	vampire.oitem_a_lt_cloth = GetProcAddress(vampire.dll, "item_a_lt_cloth");
	vampire.oitem_a_lt_leather = GetProcAddress(vampire.dll, "item_a_lt_leather");
	vampire.oitem_container = GetProcAddress(vampire.dll, "item_container");
	vampire.oitem_container_animated = GetProcAddress(vampire.dll, "item_container_animated");
	vampire.oitem_container_lock = GetProcAddress(vampire.dll, "item_container_lock");
	vampire.oitem_container_one_item_filtered = GetProcAddress(vampire.dll, "item_container_one_item_filtered");
	vampire.oitem_d_holy_light = GetProcAddress(vampire.dll, "item_d_holy_light");
	vampire.oitem_g_astrolite = GetProcAddress(vampire.dll, "item_g_astrolite");
	vampire.oitem_g_bach_journal = GetProcAddress(vampire.dll, "item_g_bach_journal");
	vampire.oitem_g_badlucktalisman = GetProcAddress(vampire.dll, "item_g_badlucktalisman");
	vampire.oitem_g_bailbond_receipt = GetProcAddress(vampire.dll, "item_g_bailbond_receipt");
	vampire.oitem_g_bertrams_cd = GetProcAddress(vampire.dll, "item_g_bertrams_cd");
	vampire.oitem_g_bloodpack = GetProcAddress(vampire.dll, "item_g_bloodpack");
	vampire.oitem_g_bluebloodpack = GetProcAddress(vampire.dll, "item_g_bluebloodpack");
	vampire.oitem_g_brotherhood_flyer = GetProcAddress(vampire.dll, "item_g_brotherhood_flyer");
	vampire.oitem_g_car_stereo = GetProcAddress(vampire.dll, "item_g_car_stereo");
	vampire.oitem_g_cash_box = GetProcAddress(vampire.dll, "item_g_cash_box");
	vampire.oitem_g_driver_license_gimble = GetProcAddress(vampire.dll, "item_g_driver_license_gimble");
	vampire.oitem_g_drugs_drug_box = GetProcAddress(vampire.dll, "item_g_drugs_drug_box");
	vampire.oitem_g_drugs_morphine_bottle = GetProcAddress(vampire.dll, "item_g_drugs_morphine_bottle");
	vampire.oitem_g_drugs_perscription_bottle = GetProcAddress(vampire.dll, "item_g_drugs_perscription_bottle");
	vampire.oitem_g_drugs_pill_bottle = GetProcAddress(vampire.dll, "item_g_drugs_pill_bottle");
	vampire.oitem_g_edane_print_report = GetProcAddress(vampire.dll, "item_g_edane_print_report");
	vampire.oitem_g_edane_report = GetProcAddress(vampire.dll, "item_g_edane_report");
	vampire.oitem_g_eldervitaepack = GetProcAddress(vampire.dll, "item_g_eldervitaepack");
	vampire.oitem_g_eyes = GetProcAddress(vampire.dll, "item_g_eyes");
	vampire.oitem_g_gargoyle_book = GetProcAddress(vampire.dll, "item_g_gargoyle_book");
	vampire.oitem_g_garys_cd = GetProcAddress(vampire.dll, "item_g_garys_cd");
	vampire.oitem_g_garys_film = GetProcAddress(vampire.dll, "item_g_garys_film");
	vampire.oitem_g_garys_photo = GetProcAddress(vampire.dll, "item_g_garys_photo");
	vampire.oitem_g_garys_tape = GetProcAddress(vampire.dll, "item_g_garys_tape");
	vampire.oitem_g_ghost_pendant = GetProcAddress(vampire.dll, "item_g_ghost_pendant");
	vampire.oitem_g_giovanni_invitation_maria = GetProcAddress(vampire.dll, "item_g_giovanni_invitation_maria");
	vampire.oitem_g_giovanni_invitation_victor = GetProcAddress(vampire.dll, "item_g_giovanni_invitation_victor");
	vampire.oitem_g_guy_magazine = GetProcAddress(vampire.dll, "item_g_guy_magazine");
	vampire.oitem_g_hannahs_appt_book = GetProcAddress(vampire.dll, "item_g_hannahs_appt_book");
	vampire.oitem_g_hatters_screenplay = GetProcAddress(vampire.dll, "item_g_hatters_screenplay");
	vampire.oitem_g_horrortape_1 = GetProcAddress(vampire.dll, "item_g_horrortape_1");
	vampire.oitem_g_horrortape_2 = GetProcAddress(vampire.dll, "item_g_horrortape_2");
	vampire.oitem_g_idol_cat = GetProcAddress(vampire.dll, "item_g_idol_cat");
	vampire.oitem_g_idol_crane = GetProcAddress(vampire.dll, "item_g_idol_crane");
	vampire.oitem_g_idol_dragon = GetProcAddress(vampire.dll, "item_g_idol_dragon");
	vampire.oitem_g_idol_elephant = GetProcAddress(vampire.dll, "item_g_idol_elephant");
	vampire.oitem_g_jumbles_flyer = GetProcAddress(vampire.dll, "item_g_jumbles_flyer");
	vampire.oitem_g_junkyard_businesscard = GetProcAddress(vampire.dll, "item_g_junkyard_businesscard");
	vampire.oitem_g_keyring = GetProcAddress(vampire.dll, "item_g_keyring");
	vampire.oitem_g_larry_briefcase = GetProcAddress(vampire.dll, "item_g_larry_briefcase");
	vampire.oitem_g_lilly_diary = GetProcAddress(vampire.dll, "item_g_lilly_diary");
	vampire.oitem_g_lilly_photo = GetProcAddress(vampire.dll, "item_g_lilly_photo");
	vampire.oitem_g_lilly_purse = GetProcAddress(vampire.dll, "item_g_lilly_purse");
	vampire.oitem_g_lockpick = GetProcAddress(vampire.dll, "item_g_lockpick");
	vampire.oitem_g_mercurio_journal = GetProcAddress(vampire.dll, "item_g_mercurio_journal");
	vampire.oitem_g_milligans_businesscard = GetProcAddress(vampire.dll, "item_g_milligans_businesscard");
	vampire.oitem_g_oh_diary = GetProcAddress(vampire.dll, "item_g_oh_diary");
	vampire.oitem_g_pisha_book = GetProcAddress(vampire.dll, "item_g_pisha_book");
	vampire.oitem_g_pisha_fetish = GetProcAddress(vampire.dll, "item_g_pisha_fetish");
	vampire.oitem_g_ring03 = GetProcAddress(vampire.dll, "item_g_ring03");
	vampire.oitem_g_ring_gold = GetProcAddress(vampire.dll, "item_g_ring_gold");
	vampire.oitem_g_ring_serial_killer_1 = GetProcAddress(vampire.dll, "item_g_ring_serial_killer_1");
	vampire.oitem_g_ring_silver = GetProcAddress(vampire.dll, "item_g_ring_silver");
	vampire.oitem_g_sewerbook_1 = GetProcAddress(vampire.dll, "item_g_sewerbook_1");
	vampire.oitem_g_stake = GetProcAddress(vampire.dll, "item_g_stake");
	vampire.oitem_g_vampyr_apocrypha = GetProcAddress(vampire.dll, "item_g_vampyr_apocrypha");
	vampire.oitem_g_vv_photo = GetProcAddress(vampire.dll, "item_g_vv_photo");
	vampire.oitem_g_wallet = GetProcAddress(vampire.dll, "item_g_wallet");
	vampire.oitem_g_warr_clipboard = GetProcAddress(vampire.dll, "item_g_warr_clipboard");
	vampire.oitem_g_warr_ledger_1 = GetProcAddress(vampire.dll, "item_g_warr_ledger_1");
	vampire.oitem_g_warr_ledger_2 = GetProcAddress(vampire.dll, "item_g_warr_ledger_2");
	vampire.oitem_g_warrens4_passkey = GetProcAddress(vampire.dll, "item_g_warrens4_passkey");
	vampire.oitem_g_watch_fancy = GetProcAddress(vampire.dll, "item_g_watch_fancy");
	vampire.oitem_g_watch_normal = GetProcAddress(vampire.dll, "item_g_watch_normal");
	vampire.oitem_g_werewolf_bloodpack = GetProcAddress(vampire.dll, "item_g_werewolf_bloodpack");
	vampire.oitem_g_wireless_camera_1 = GetProcAddress(vampire.dll, "item_g_wireless_camera_1");
	vampire.oitem_g_wireless_camera_2 = GetProcAddress(vampire.dll, "item_g_wireless_camera_2");
	vampire.oitem_g_wireless_camera_3 = GetProcAddress(vampire.dll, "item_g_wireless_camera_3");
	vampire.oitem_g_wireless_camera_4 = GetProcAddress(vampire.dll, "item_g_wireless_camera_4");
	vampire.oitem_i_written = GetProcAddress(vampire.dll, "item_i_written");
	vampire.oitem_k_ash_cell_key = GetProcAddress(vampire.dll, "item_k_ash_cell_key");
	vampire.oitem_k_carson_apartment_key = GetProcAddress(vampire.dll, "item_k_carson_apartment_key");
	vampire.oitem_k_chinese_theatre_key = GetProcAddress(vampire.dll, "item_k_chinese_theatre_key");
	vampire.oitem_k_clinic_cs_key = GetProcAddress(vampire.dll, "item_k_clinic_cs_key");
	vampire.oitem_k_clinic_maintenance_key = GetProcAddress(vampire.dll, "item_k_clinic_maintenance_key");
	vampire.oitem_k_clinic_stairs_key = GetProcAddress(vampire.dll, "item_k_clinic_stairs_key");
	vampire.oitem_k_edane_key = GetProcAddress(vampire.dll, "item_k_edane_key");
	vampire.oitem_k_empire_jezebel_key = GetProcAddress(vampire.dll, "item_k_empire_jezebel_key");
	vampire.oitem_k_empire_mafia_key = GetProcAddress(vampire.dll, "item_k_empire_mafia_key");
	vampire.oitem_k_fu_cell_key = GetProcAddress(vampire.dll, "item_k_fu_cell_key");
	vampire.oitem_k_fu_office_key = GetProcAddress(vampire.dll, "item_k_fu_office_key");
	vampire.oitem_k_gallery_noir_key = GetProcAddress(vampire.dll, "item_k_gallery_noir_key");
	vampire.oitem_k_gimble_key = GetProcAddress(vampire.dll, "item_k_gimble_key");
	vampire.oitem_k_hannahs_safe_key = GetProcAddress(vampire.dll, "item_k_hannahs_safe_key");
	vampire.oitem_k_hitman_ji_key = GetProcAddress(vampire.dll, "item_k_hitman_ji_key");
	vampire.oitem_k_hitman_lu_key = GetProcAddress(vampire.dll, "item_k_hitman_lu_key");
	vampire.oitem_k_key_generic = GetProcAddress(vampire.dll, "item_k_key_generic");
	vampire.oitem_k_kiki_key = GetProcAddress(vampire.dll, "item_k_kiki_key");
	vampire.oitem_k_leopold_int_key = GetProcAddress(vampire.dll, "item_k_leopold_int_key");
	vampire.oitem_k_lilly_key = GetProcAddress(vampire.dll, "item_k_lilly_key");
	vampire.oitem_k_lucky_star_murder_key = GetProcAddress(vampire.dll, "item_k_lucky_star_murder_key");
	vampire.oitem_k_malcolm_office_key = GetProcAddress(vampire.dll, "item_k_malcolm_office_key");
	vampire.oitem_k_malkavian_refrigerator_key = GetProcAddress(vampire.dll, "item_k_malkavian_refrigerator_key");
	vampire.oitem_k_murietta_key = GetProcAddress(vampire.dll, "item_k_murietta_key");
	vampire.oitem_k_museum_basement_key = GetProcAddress(vampire.dll, "item_k_museum_basement_key");
	vampire.oitem_k_museum_office_key = GetProcAddress(vampire.dll, "item_k_museum_office_key");
	vampire.oitem_k_museum_storage_key = GetProcAddress(vampire.dll, "item_k_museum_storage_key");
	vampire.oitem_k_museum_storeroom_key = GetProcAddress(vampire.dll, "item_k_museum_storeroom_key");
	vampire.oitem_k_netcafe_office_key = GetProcAddress(vampire.dll, "item_k_netcafe_office_key");
	vampire.oitem_k_oceanhouse_basement_key = GetProcAddress(vampire.dll, "item_k_oceanhouse_basement_key");
	vampire.oitem_k_oceanhouse_sewer_key = GetProcAddress(vampire.dll, "item_k_oceanhouse_sewer_key");
	vampire.oitem_k_oceanhouse_upstairs_key = GetProcAddress(vampire.dll, "item_k_oceanhouse_upstairs_key");
	vampire.oitem_k_oh_front_key = GetProcAddress(vampire.dll, "item_k_oh_front_key");
	vampire.oitem_k_sarcophagus_key = GetProcAddress(vampire.dll, "item_k_sarcophagus_key");
	vampire.oitem_k_shrekhub_four_key = GetProcAddress(vampire.dll, "item_k_shrekhub_four_key");
	vampire.oitem_k_shrekhub_one_key = GetProcAddress(vampire.dll, "item_k_shrekhub_one_key");
	vampire.oitem_k_shrekhub_three_key = GetProcAddress(vampire.dll, "item_k_shrekhub_three_key");
	vampire.oitem_k_skyline_haven_key = GetProcAddress(vampire.dll, "item_k_skyline_haven_key");
	vampire.oitem_k_tatoo_parlor_key = GetProcAddress(vampire.dll, "item_k_tatoo_parlor_key");
	vampire.oitem_k_tawni_apartment_key = GetProcAddress(vampire.dll, "item_k_tawni_apartment_key");
	vampire.oitem_k_tutorial_chopshop_stairs_key = GetProcAddress(vampire.dll, "item_k_tutorial_chopshop_stairs_key");
	vampire.oitem_m_money_clip = GetProcAddress(vampire.dll, "item_m_money_clip");
	vampire.oitem_m_money_envelope = GetProcAddress(vampire.dll, "item_m_money_envelope");
	vampire.oitem_m_wallet = GetProcAddress(vampire.dll, "item_m_wallet");
	vampire.oitem_p_gargoyle_talisman = GetProcAddress(vampire.dll, "item_p_gargoyle_talisman");
	vampire.oitem_p_occult_blood_buff = GetProcAddress(vampire.dll, "item_p_occult_blood_buff");
	vampire.oitem_p_occult_dexterity = GetProcAddress(vampire.dll, "item_p_occult_dexterity");
	vampire.oitem_p_occult_dodge = GetProcAddress(vampire.dll, "item_p_occult_dodge");
	vampire.oitem_p_occult_experience = GetProcAddress(vampire.dll, "item_p_occult_experience");
	vampire.oitem_p_occult_frenzy = GetProcAddress(vampire.dll, "item_p_occult_frenzy");
	vampire.oitem_p_occult_hacking = GetProcAddress(vampire.dll, "item_p_occult_hacking");
	vampire.oitem_p_occult_heal_rate = GetProcAddress(vampire.dll, "item_p_occult_heal_rate");
	vampire.oitem_p_occult_lockpicking = GetProcAddress(vampire.dll, "item_p_occult_lockpicking");
	vampire.oitem_p_occult_obfuscate = GetProcAddress(vampire.dll, "item_p_occult_obfuscate");
	vampire.oitem_p_occult_passive_durations = GetProcAddress(vampire.dll, "item_p_occult_passive_durations");
	vampire.oitem_p_occult_presence = GetProcAddress(vampire.dll, "item_p_occult_presence");
	vampire.oitem_p_occult_regen = GetProcAddress(vampire.dll, "item_p_occult_regen");
	vampire.oitem_p_occult_strength = GetProcAddress(vampire.dll, "item_p_occult_strength");
	vampire.oitem_p_occult_thaum_damage = GetProcAddress(vampire.dll, "item_p_occult_thaum_damage");
	vampire.oitem_p_research_hg_computers = GetProcAddress(vampire.dll, "item_p_research_hg_computers");
	vampire.oitem_p_research_hg_dodge = GetProcAddress(vampire.dll, "item_p_research_hg_dodge");
	vampire.oitem_p_research_hg_firearms = GetProcAddress(vampire.dll, "item_p_research_hg_firearms");
	vampire.oitem_p_research_hg_melee = GetProcAddress(vampire.dll, "item_p_research_hg_melee");
	vampire.oitem_p_research_lg_computers = GetProcAddress(vampire.dll, "item_p_research_lg_computers");
	vampire.oitem_p_research_lg_dodge = GetProcAddress(vampire.dll, "item_p_research_lg_dodge");
	vampire.oitem_p_research_lg_firearms = GetProcAddress(vampire.dll, "item_p_research_lg_firearms");
	vampire.oitem_p_research_lg_stealth = GetProcAddress(vampire.dll, "item_p_research_lg_stealth");
	vampire.oitem_p_research_mg_brawl = GetProcAddress(vampire.dll, "item_p_research_mg_brawl");
	vampire.oitem_p_research_mg_finance = GetProcAddress(vampire.dll, "item_p_research_mg_finance");
	vampire.oitem_p_research_mg_melee = GetProcAddress(vampire.dll, "item_p_research_mg_melee");
	vampire.oitem_p_research_mg_security = GetProcAddress(vampire.dll, "item_p_research_mg_security");
	vampire.oitem_w_avamp_blade = GetProcAddress(vampire.dll, "item_w_avamp_blade");
	vampire.oitem_w_baseball_bat = GetProcAddress(vampire.dll, "item_w_baseball_bat");
	vampire.oitem_w_baton = GetProcAddress(vampire.dll, "item_w_baton");
	vampire.oitem_w_bush_hook = GetProcAddress(vampire.dll, "item_w_bush_hook");
	vampire.oitem_w_chang_blade = GetProcAddress(vampire.dll, "item_w_chang_blade");
	vampire.oitem_w_chang_claw = GetProcAddress(vampire.dll, "item_w_chang_claw");
	vampire.oitem_w_chang_energy_ball = GetProcAddress(vampire.dll, "item_w_chang_energy_ball");
	vampire.oitem_w_chang_ghost = GetProcAddress(vampire.dll, "item_w_chang_ghost");
	vampire.oitem_w_claws = GetProcAddress(vampire.dll, "item_w_claws");
	vampire.oitem_w_claws_ghoul = GetProcAddress(vampire.dll, "item_w_claws_ghoul");
	vampire.oitem_w_claws_protean4 = GetProcAddress(vampire.dll, "item_w_claws_protean4");
	vampire.oitem_w_claws_protean5 = GetProcAddress(vampire.dll, "item_w_claws_protean5");
	vampire.oitem_w_colt_anaconda = GetProcAddress(vampire.dll, "item_w_colt_anaconda");
	vampire.oitem_w_crossbow = GetProcAddress(vampire.dll, "item_w_crossbow");
	vampire.oitem_w_crossbow_flaming = GetProcAddress(vampire.dll, "item_w_crossbow_flaming");
	vampire.oitem_w_deserteagle = GetProcAddress(vampire.dll, "item_w_deserteagle");
	vampire.oitem_w_fireaxe = GetProcAddress(vampire.dll, "item_w_fireaxe");
	vampire.oitem_w_fists = GetProcAddress(vampire.dll, "item_w_fists");
	vampire.oitem_w_flamethrower = GetProcAddress(vampire.dll, "item_w_flamethrower");
	vampire.oitem_w_gargoyle_fist = GetProcAddress(vampire.dll, "item_w_gargoyle_fist");
	vampire.oitem_w_glock_17c = GetProcAddress(vampire.dll, "item_w_glock_17c");
	vampire.oitem_w_grenade_frag = GetProcAddress(vampire.dll, "item_w_grenade_frag");
	vampire.oitem_w_hengeyokai_fist = GetProcAddress(vampire.dll, "item_w_hengeyokai_fist");
	vampire.oitem_w_ithaca_m_37 = GetProcAddress(vampire.dll, "item_w_ithaca_m_37");
	vampire.oitem_w_katana = GetProcAddress(vampire.dll, "item_w_katana");
	vampire.oitem_w_knife = GetProcAddress(vampire.dll, "item_w_knife");
	vampire.oitem_w_mac_10 = GetProcAddress(vampire.dll, "item_w_mac_10");
	vampire.oitem_w_manbat_claw = GetProcAddress(vampire.dll, "item_w_manbat_claw");
	vampire.oitem_w_mingxiao_melee = GetProcAddress(vampire.dll, "item_w_mingxiao_melee");
	vampire.oitem_w_mingxiao_spit = GetProcAddress(vampire.dll, "item_w_mingxiao_spit");
	vampire.oitem_w_mingxiao_tentacle = GetProcAddress(vampire.dll, "item_w_mingxiao_tentacle");
	vampire.oitem_w_occultblade = GetProcAddress(vampire.dll, "item_w_occultblade");
	vampire.oitem_w_rem_m_700_bach = GetProcAddress(vampire.dll, "item_w_rem_m_700_bach");
	vampire.oitem_w_remington_m_700 = GetProcAddress(vampire.dll, "item_w_remington_m_700");
	vampire.oitem_w_sabbatleader_attack = GetProcAddress(vampire.dll, "item_w_sabbatleader_attack");
	vampire.oitem_w_severed_arm = GetProcAddress(vampire.dll, "item_w_severed_arm");
	vampire.oitem_w_sheriff_sword = GetProcAddress(vampire.dll, "item_w_sheriff_sword");
	vampire.oitem_w_sledgehammer = GetProcAddress(vampire.dll, "item_w_sledgehammer");
	vampire.oitem_w_steyr_aug = GetProcAddress(vampire.dll, "item_w_steyr_aug");
	vampire.oitem_w_supershotgun = GetProcAddress(vampire.dll, "item_w_supershotgun");
	vampire.oitem_w_thirtyeight = GetProcAddress(vampire.dll, "item_w_thirtyeight");
	vampire.oitem_w_tire_iron = GetProcAddress(vampire.dll, "item_w_tire_iron");
	vampire.oitem_w_torch = GetProcAddress(vampire.dll, "item_w_torch");
	vampire.oitem_w_tzimisce2_claw = GetProcAddress(vampire.dll, "item_w_tzimisce2_claw");
	vampire.oitem_w_tzimisce2_head = GetProcAddress(vampire.dll, "item_w_tzimisce2_head");
	vampire.oitem_w_tzimisce3_claw = GetProcAddress(vampire.dll, "item_w_tzimisce3_claw");
	vampire.oitem_w_tzimisce_melee = GetProcAddress(vampire.dll, "item_w_tzimisce_melee");
	vampire.oitem_w_unarmed = GetProcAddress(vampire.dll, "item_w_unarmed");
	vampire.oitem_w_uzi = GetProcAddress(vampire.dll, "item_w_uzi");
	vampire.oitem_w_werewolf_attacks = GetProcAddress(vampire.dll, "item_w_werewolf_attacks");
	vampire.oitem_w_zombie_fists = GetProcAddress(vampire.dll, "item_w_zombie_fists");
	vampire.okeyframe_rope = GetProcAddress(vampire.dll, "keyframe_rope");
	vampire.okeyframe_track = GetProcAddress(vampire.dll, "keyframe_track");
	vampire.olight = GetProcAddress(vampire.dll, "light");
	vampire.olight_dynamic = GetProcAddress(vampire.dll, "light_dynamic");
	vampire.olight_environment = GetProcAddress(vampire.dll, "light_environment");
	vampire.olight_glspot = GetProcAddress(vampire.dll, "light_glspot");
	vampire.olight_spot = GetProcAddress(vampire.dll, "light_spot");
	vampire.ologic_auto = GetProcAddress(vampire.dll, "logic_auto");
	vampire.ologic_branch = GetProcAddress(vampire.dll, "logic_branch");
	vampire.ologic_case = GetProcAddress(vampire.dll, "logic_case");
	vampire.ologic_case_toggle = GetProcAddress(vampire.dll, "logic_case_toggle");
	vampire.ologic_choreographed_scene = GetProcAddress(vampire.dll, "logic_choreographed_scene");
	vampire.ologic_compare = GetProcAddress(vampire.dll, "logic_compare");
	vampire.ologic_lineto = GetProcAddress(vampire.dll, "logic_lineto");
	vampire.ologic_multicompare = GetProcAddress(vampire.dll, "logic_multicompare");
	vampire.ologic_npc_condition = GetProcAddress(vampire.dll, "logic_npc_condition");
	vampire.ologic_proximity = GetProcAddress(vampire.dll, "logic_proximity");
	vampire.ologic_pythoncheck = GetProcAddress(vampire.dll, "logic_pythoncheck");
	vampire.ologic_relay = GetProcAddress(vampire.dll, "logic_relay");
	vampire.ologic_squad_condition = GetProcAddress(vampire.dll, "logic_squad_condition");
	vampire.ologic_timer = GetProcAddress(vampire.dll, "logic_timer");
	vampire.ologic_visibility_test = GetProcAddress(vampire.dll, "logic_visibility_test");
	vampire.omath_colorblend = GetProcAddress(vampire.dll, "math_colorblend");
	vampire.omath_counter = GetProcAddress(vampire.dll, "math_counter");
	vampire.omath_remap = GetProcAddress(vampire.dll, "math_remap");
	vampire.omomentary_door = GetProcAddress(vampire.dll, "momentary_door");
	vampire.omomentary_rot_button = GetProcAddress(vampire.dll, "momentary_rot_button");
	vampire.omonster_generic = GetProcAddress(vampire.dll, "monster_generic");
	vampire.omove_keyframed = GetProcAddress(vampire.dll, "move_keyframed");
	vampire.omove_rope = GetProcAddress(vampire.dll, "move_rope");
	vampire.omover_keyframe = GetProcAddress(vampire.dll, "mover_keyframe");
	vampire.omultisource = GetProcAddress(vampire.dll, "multisource");
	vampire.onpc_TestBaseHumanoid = GetProcAddress(vampire.dll, "npc_TestBaseHumanoid");
	vampire.onpc_VAndreiBlood = GetProcAddress(vampire.dll, "npc_VAndreiBlood");
	vampire.onpc_VAnimal = GetProcAddress(vampire.dll, "npc_VAnimal");
	vampire.onpc_VAsianVampire = GetProcAddress(vampire.dll, "npc_VAsianVampire");
	vampire.onpc_VBach = GetProcAddress(vampire.dll, "npc_VBach");
	vampire.onpc_VBatSwarm = GetProcAddress(vampire.dll, "npc_VBatSwarm");
	vampire.onpc_VBrujah = GetProcAddress(vampire.dll, "npc_VBrujah");
	vampire.onpc_VCamera = GetProcAddress(vampire.dll, "npc_VCamera");
	vampire.onpc_VCameraSecurity = GetProcAddress(vampire.dll, "npc_VCameraSecurity");
	vampire.onpc_VChangBros = GetProcAddress(vampire.dll, "npc_VChangBros");
	vampire.onpc_VChangBrosBlade = GetProcAddress(vampire.dll, "npc_VChangBrosBlade");
	vampire.onpc_VChangBrosClaw = GetProcAddress(vampire.dll, "npc_VChangBrosClaw");
	vampire.onpc_VCombatman = GetProcAddress(vampire.dll, "npc_VCombatman");
	vampire.onpc_VCop = GetProcAddress(vampire.dll, "npc_VCop");
	vampire.onpc_VDialogPedestrian = GetProcAddress(vampire.dll, "npc_VDialogPedestrian");
	vampire.onpc_VDog = GetProcAddress(vampire.dll, "npc_VDog");
	vampire.onpc_VFrenzyShadow = GetProcAddress(vampire.dll, "npc_VFrenzyShadow");
	vampire.onpc_VGangrel = GetProcAddress(vampire.dll, "npc_VGangrel");
	vampire.onpc_VGargoyle = GetProcAddress(vampire.dll, "npc_VGargoyle");
	vampire.onpc_VGhoulCroucher = GetProcAddress(vampire.dll, "npc_VGhoulCroucher");
	vampire.onpc_VGuard1 = GetProcAddress(vampire.dll, "npc_VGuard1");
	vampire.onpc_VHengeyokai = GetProcAddress(vampire.dll, "npc_VHengeyokai");
	vampire.onpc_VHuman = GetProcAddress(vampire.dll, "npc_VHuman");
	vampire.onpc_VHumanCombatPatrol = GetProcAddress(vampire.dll, "npc_VHumanCombatPatrol");
	vampire.onpc_VHumanCombatant = GetProcAddress(vampire.dll, "npc_VHumanCombatant");
	vampire.onpc_VHunter = GetProcAddress(vampire.dll, "npc_VHunter");
	vampire.onpc_VLasombra = GetProcAddress(vampire.dll, "npc_VLasombra");
	vampire.onpc_VMalkavian = GetProcAddress(vampire.dll, "npc_VMalkavian");
	vampire.onpc_VManBat = GetProcAddress(vampire.dll, "npc_VManBat");
	vampire.onpc_VMercurio = GetProcAddress(vampire.dll, "npc_VMercurio");
	vampire.onpc_VMingXiao = GetProcAddress(vampire.dll, "npc_VMingXiao");
	vampire.onpc_VMingXiaoTentacle = GetProcAddress(vampire.dll, "npc_VMingXiaoTentacle");
	vampire.onpc_VMoleman = GetProcAddress(vampire.dll, "npc_VMoleman");
	vampire.onpc_VNewscaster = GetProcAddress(vampire.dll, "npc_VNewscaster");
	vampire.onpc_VNosferatu = GetProcAddress(vampire.dll, "npc_VNosferatu");
	vampire.onpc_VPedestrian = GetProcAddress(vampire.dll, "npc_VPedestrian");
	vampire.onpc_VPlaceholder = GetProcAddress(vampire.dll, "npc_VPlaceholder");
	vampire.onpc_VPlayerController = GetProcAddress(vampire.dll, "npc_VPlayerController");
	vampire.onpc_VProneDialog = GetProcAddress(vampire.dll, "npc_VProneDialog");
	vampire.onpc_VRat = GetProcAddress(vampire.dll, "npc_VRat");
	vampire.onpc_VSabbatGunman = GetProcAddress(vampire.dll, "npc_VSabbatGunman");
	vampire.onpc_VSabbatLeader = GetProcAddress(vampire.dll, "npc_VSabbatLeader");
	vampire.onpc_VScurrying = GetProcAddress(vampire.dll, "npc_VScurrying");
	vampire.onpc_VSheriffMan = GetProcAddress(vampire.dll, "npc_VSheriffMan");
	vampire.onpc_VSheriffSwarm = GetProcAddress(vampire.dll, "npc_VSheriffSwarm");
	vampire.onpc_VStalker = GetProcAddress(vampire.dll, "npc_VStalker");
	vampire.onpc_VTaxiDriver = GetProcAddress(vampire.dll, "npc_VTaxiDriver");
	vampire.onpc_VTest = GetProcAddress(vampire.dll, "npc_VTest");
	vampire.onpc_VToreador = GetProcAddress(vampire.dll, "npc_VToreador");
	vampire.onpc_VTremere = GetProcAddress(vampire.dll, "npc_VTremere");
	vampire.onpc_VTzimisce = GetProcAddress(vampire.dll, "npc_VTzimisce");
	vampire.onpc_VTzimisceHeadClaw = GetProcAddress(vampire.dll, "npc_VTzimisceHeadClaw");
	vampire.onpc_VTzimisceRunner = GetProcAddress(vampire.dll, "npc_VTzimisceRunner");
	vampire.onpc_VVampire = GetProcAddress(vampire.dll, "npc_VVampire");
	vampire.onpc_VVampireBoss = GetProcAddress(vampire.dll, "npc_VVampireBoss");
	vampire.onpc_VVentrue = GetProcAddress(vampire.dll, "npc_VVentrue");
	vampire.onpc_VWerewolf = GetProcAddress(vampire.dll, "npc_VWerewolf");
	vampire.onpc_VWolfMorph = GetProcAddress(vampire.dll, "npc_VWolfMorph");
	vampire.onpc_VYukie = GetProcAddress(vampire.dll, "npc_VYukie");
	vampire.onpc_VZombie = GetProcAddress(vampire.dll, "npc_VZombie");
	vampire.onpc_bullseye = GetProcAddress(vampire.dll, "npc_bullseye");
	vampire.onpc_crow = GetProcAddress(vampire.dll, "npc_crow");
	vampire.onpc_generic = GetProcAddress(vampire.dll, "npc_generic");
	vampire.onpc_generic_bathack = GetProcAddress(vampire.dll, "npc_generic_bathack");
	vampire.onpc_maker = GetProcAddress(vampire.dll, "npc_maker");
	vampire.onpc_maker_fleshpile = GetProcAddress(vampire.dll, "npc_maker_fleshpile");
	vampire.onpc_maker_zombie = GetProcAddress(vampire.dll, "npc_maker_zombie");
	vampire.onpc_payphone = GetProcAddress(vampire.dll, "npc_payphone");
	vampire.onpc_sabbat = GetProcAddress(vampire.dll, "npc_sabbat");
	vampire.oparams_explosion = GetProcAddress(vampire.dll, "params_explosion");
	vampire.oparams_particle = GetProcAddress(vampire.dll, "params_particle");
	vampire.opath_corner = GetProcAddress(vampire.dll, "path_corner");
	vampire.opath_corner_crash = GetProcAddress(vampire.dll, "path_corner_crash");
	vampire.ophys_animlink = GetProcAddress(vampire.dll, "phys_animlink");
	vampire.ophys_ballsocket = GetProcAddress(vampire.dll, "phys_ballsocket");
	vampire.ophys_constraint = GetProcAddress(vampire.dll, "phys_constraint");
	vampire.ophys_constraintsystem = GetProcAddress(vampire.dll, "phys_constraintsystem");
	vampire.ophys_convert = GetProcAddress(vampire.dll, "phys_convert");
	vampire.ophys_hinge = GetProcAddress(vampire.dll, "phys_hinge");
	vampire.ophys_keepupright = GetProcAddress(vampire.dll, "phys_keepupright");
	vampire.ophys_motor = GetProcAddress(vampire.dll, "phys_motor");
	vampire.ophys_pulleyconstraint = GetProcAddress(vampire.dll, "phys_pulleyconstraint");
	vampire.ophys_slideconstraint = GetProcAddress(vampire.dll, "phys_slideconstraint");
	vampire.ophys_spring = GetProcAddress(vampire.dll, "phys_spring");
	vampire.ophys_thruster = GetProcAddress(vampire.dll, "phys_thruster");
	vampire.ophys_torque = GetProcAddress(vampire.dll, "phys_torque");
	vampire.ophysics_cannister = GetProcAddress(vampire.dll, "physics_cannister");
	vampire.ophysics_prop = GetProcAddress(vampire.dll, "physics_prop");
	vampire.ophysics_prop_ragdoll = GetProcAddress(vampire.dll, "physics_prop_ragdoll");
	vampire.oplayer = GetProcAddress(vampire.dll, "player");
	vampire.oplayer_loadsaved = GetProcAddress(vampire.dll, "player_loadsaved");
	vampire.oplayer_manager = GetProcAddress(vampire.dll, "player_manager");
	vampire.oplayer_pickup = GetProcAddress(vampire.dll, "player_pickup");
	vampire.oplayer_weaponstrip = GetProcAddress(vampire.dll, "player_weaponstrip");
	vampire.oplayerevents = GetProcAddress(vampire.dll, "playerevents");
	vampire.opoint_anglesensor = GetProcAddress(vampire.dll, "point_anglesensor");
	vampire.opoint_camera = GetProcAddress(vampire.dll, "point_camera");
	vampire.opoint_explosion = GetProcAddress(vampire.dll, "point_explosion");
	vampire.opoint_hurt = GetProcAddress(vampire.dll, "point_hurt");
	vampire.opoint_target = GetProcAddress(vampire.dll, "point_target");
	vampire.opoint_teleport = GetProcAddress(vampire.dll, "point_teleport");
	vampire.oprop_base = GetProcAddress(vampire.dll, "prop_base");
	vampire.oprop_button = GetProcAddress(vampire.dll, "prop_button");
	vampire.oprop_clockhand = GetProcAddress(vampire.dll, "prop_clockhand");
	vampire.oprop_destructable = GetProcAddress(vampire.dll, "prop_destructable");
	vampire.oprop_doorknob = GetProcAddress(vampire.dll, "prop_doorknob");
	vampire.oprop_doorknob_electronic = GetProcAddress(vampire.dll, "prop_doorknob_electronic");
	vampire.oprop_dynamic = GetProcAddress(vampire.dll, "prop_dynamic");
	vampire.oprop_dynamic_ornament = GetProcAddress(vampire.dll, "prop_dynamic_ornament");
	vampire.oprop_hacking = GetProcAddress(vampire.dll, "prop_hacking");
	vampire.oprop_haunted = GetProcAddress(vampire.dll, "prop_haunted");
	vampire.oprop_keypad = GetProcAddress(vampire.dll, "prop_keypad");
	vampire.oprop_largehull_ignore = GetProcAddress(vampire.dll, "prop_largehull_ignore");
	vampire.oprop_model_state = GetProcAddress(vampire.dll, "prop_model_state");
	vampire.oprop_mover = GetProcAddress(vampire.dll, "prop_mover");
	vampire.oprop_padlock = GetProcAddress(vampire.dll, "prop_padlock");
	vampire.oprop_physics = GetProcAddress(vampire.dll, "prop_physics");
	vampire.oprop_physics_contested = GetProcAddress(vampire.dll, "prop_physics_contested");
	vampire.oprop_radio = GetProcAddress(vampire.dll, "prop_radio");
	vampire.oprop_ragdoll = GetProcAddress(vampire.dll, "prop_ragdoll");
	vampire.oprop_ragdoll_attached = GetProcAddress(vampire.dll, "prop_ragdoll_attached");
	vampire.oprop_ragdoll_special = GetProcAddress(vampire.dll, "prop_ragdoll_special");
	vampire.oprop_sign = GetProcAddress(vampire.dll, "prop_sign");
	vampire.oprop_slashable = GetProcAddress(vampire.dll, "prop_slashable");
	vampire.oprop_switch = GetProcAddress(vampire.dll, "prop_switch");
	vampire.oraggib = GetProcAddress(vampire.dll, "raggib");
	vampire.oscripted_scene = GetProcAddress(vampire.dll, "scripted_scene");
	vampire.oscripted_sentence = GetProcAddress(vampire.dll, "scripted_sentence");
	vampire.oscripted_sequence = GetProcAddress(vampire.dll, "scripted_sequence");
	vampire.oscripted_target = GetProcAddress(vampire.dll, "scripted_target");
	vampire.osecurity_camera = GetProcAddress(vampire.dll, "security_camera");
	vampire.osheriff_teleport_bats = GetProcAddress(vampire.dll, "sheriff_teleport_bats");
	vampire.osimple_physics_brush = GetProcAddress(vampire.dll, "simple_physics_brush");
	vampire.osimple_physics_prop = GetProcAddress(vampire.dll, "simple_physics_prop");
	vampire.osky_camera = GetProcAddress(vampire.dll, "sky_camera");
	vampire.osoundent = GetProcAddress(vampire.dll, "soundent");
	vampire.ospeaker = GetProcAddress(vampire.dll, "speaker");
	vampire.ote_tester = GetProcAddress(vampire.dll, "te_tester");
	vampire.otectonic = GetProcAddress(vampire.dll, "tectonic");
	vampire.otest_traceline = GetProcAddress(vampire.dll, "test_traceline");
	vampire.otrigger = GetProcAddress(vampire.dll, "trigger");
	vampire.otrigger_autosave = GetProcAddress(vampire.dll, "trigger_autosave");
	vampire.otrigger_bomb_site = GetProcAddress(vampire.dll, "trigger_bomb_site");
	vampire.otrigger_brush = GetProcAddress(vampire.dll, "trigger_brush");
	vampire.otrigger_changelevel = GetProcAddress(vampire.dll, "trigger_changelevel");
	vampire.otrigger_checkvolume = GetProcAddress(vampire.dll, "trigger_checkvolume");
	vampire.otrigger_discipline_context = GetProcAddress(vampire.dll, "trigger_discipline_context");
	vampire.otrigger_electric_bugaloo = GetProcAddress(vampire.dll, "trigger_electric_bugaloo");
	vampire.otrigger_environmental_audio = GetProcAddress(vampire.dll, "trigger_environmental_audio");
	vampire.otrigger_fog = GetProcAddress(vampire.dll, "trigger_fog");
	vampire.otrigger_hurt = GetProcAddress(vampire.dll, "trigger_hurt");
	vampire.otrigger_impact = GetProcAddress(vampire.dll, "trigger_impact");
	vampire.otrigger_inventory_check = GetProcAddress(vampire.dll, "trigger_inventory_check");
	vampire.otrigger_look = GetProcAddress(vampire.dll, "trigger_look");
	vampire.otrigger_multiple = GetProcAddress(vampire.dll, "trigger_multiple");
	vampire.otrigger_once = GetProcAddress(vampire.dll, "trigger_once");
	vampire.otrigger_player_activity_level = GetProcAddress(vampire.dll, "trigger_player_activity_level");
	vampire.otrigger_proximity = GetProcAddress(vampire.dll, "trigger_proximity");
	vampire.otrigger_push = GetProcAddress(vampire.dll, "trigger_push");
	vampire.otrigger_small_hull = GetProcAddress(vampire.dll, "trigger_small_hull");
	vampire.otrigger_stealth_mod = GetProcAddress(vampire.dll, "trigger_stealth_mod");
	vampire.otrigger_teleport = GetProcAddress(vampire.dll, "trigger_teleport");
	vampire.otrigger_transition = GetProcAddress(vampire.dll, "trigger_transition");
	vampire.otrigger_werewolf_zone = GetProcAddress(vampire.dll, "trigger_werewolf_zone");
	vampire.otrigger_wind = GetProcAddress(vampire.dll, "trigger_wind");
	vampire.ovampire_skill = GetProcAddress(vampire.dll, "vampire_skill");
	vampire.ovampireprojectile = GetProcAddress(vampire.dll, "vampireprojectile");
	vampire.ovampireprojectile_mingxiaospit = GetProcAddress(vampire.dll, "vampireprojectile_mingxiaospit");
	vampire.ovdisciplineprojectile = GetProcAddress(vampire.dll, "vdisciplineprojectile");
	vampire.ovgui_screen = GetProcAddress(vampire.dll, "vgui_screen");
	vampire.oviewmodel = GetProcAddress(vampire.dll, "viewmodel");
	vampire.oweapon_physcannon = GetProcAddress(vampire.dll, "weapon_physcannon");
	vampire.owindow_pane = GetProcAddress(vampire.dll, "window_pane");
	vampire.oworldevents = GetProcAddress(vampire.dll, "worldevents");
	vampire.oworldspawn = GetProcAddress(vampire.dll, "worldspawn");
}
#pragma endregion

static constexpr unsigned kRva_CBaseEntity_operator_new_wrapper = 0x000AA720; //ghidra - thunk_FUN_100aa720
static constexpr unsigned kRva_BaseCtorAfterNew = 0x003F42B0; //ghidra - FUN_103f42b0
static constexpr unsigned kRva_KeyItemVtable = 0x005140DC; //ghidra - PTR_LAB_105140dc
static constexpr unsigned kEntitySizeBytes = 0x954;

// PostConstructor lives at vtable + 0x1A8 -> slot index 0x1A8 / 4
static constexpr unsigned kPostConstructorSlot = 0x1A8 / sizeof(void*);

using AllocFnType = void* (__cdecl*)(unsigned size);
using BaseConstructorFnType = void(__thiscall*)(void* self);
using PostConstructorFnType = void(__thiscall*)(void* self, const char* classname);

static void* CreateExampleKeyEntity(const char* classname) {
	if (!vampire.dll)
		return nullptr;

	auto* moduleBase = reinterpret_cast<unsigned char*>(vampire.dll);
	auto allocFn = reinterpret_cast<AllocFnType>(moduleBase + kRva_CBaseEntity_operator_new_wrapper);
	auto baseConstructorFn = reinterpret_cast<BaseConstructorFnType>(moduleBase + kRva_BaseCtorAfterNew);

	void* ent = allocFn(kEntitySizeBytes);
	if (!ent)
		return nullptr;

	baseConstructorFn(ent);

	//install the same vtable pointer all keys use (absolute address = orig base + RVA).
	*reinterpret_cast<unsigned int*>(ent) = reinterpret_cast<unsigned int>(moduleBase + kRva_KeyItemVtable);

	//indirect through vtable slot +0x1A8
	auto* vtbl = *reinterpret_cast<void***>(ent);
	auto postConstructorFn = reinterpret_cast<PostConstructorFnType>(vtbl[kPostConstructorSlot]);
	postConstructorFn(ent, classname);

	return ent;
}

extern "C" void* __cdecl item_k_example_new_key(void) {
	static const char kClassname[] = "item_k_example_new_key";  // must match export / maps
	return CreateExampleKeyEntity(kClassname);
}

extern "C" void* __cdecl item_k_example_new_key2(void) {
	static const char kClassname[] = "item_k_example_new_key2";  // must match export / maps
	return CreateExampleKeyEntity(kClassname);
}

static constexpr unsigned kRva_GameDllModuleHandleForFactoryLookup = 0x00070BA58;

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
	switch (ul_reason_for_call) {
	case DLL_PROCESS_ATTACH:
		vampire.dll = LoadLibraryA(R"(.\Vampire\dlls\vampire2.dll)");
		setupFunctions();
		if (vampire.dll) {
			auto* moduleSlot = reinterpret_cast<HMODULE*>(
				reinterpret_cast<unsigned char*>(vampire.dll) + kRva_GameDllModuleHandleForFactoryLookup);
			*moduleSlot = hModule;
		}
		break;
	case DLL_PROCESS_DETACH:
		FreeLibrary(vampire.dll);
		break;
	}
	return 1;
}
