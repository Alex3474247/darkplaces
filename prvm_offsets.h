PRVM_DECLARE_clientfieldedict(aiment)
PRVM_DECLARE_clientfieldedict(chain)
PRVM_DECLARE_clientfieldedict(enemy)
PRVM_DECLARE_clientfieldedict(groundentity)
PRVM_DECLARE_clientfieldedict(owner)
PRVM_DECLARE_clientfieldedict(tag_entity)
PRVM_DECLARE_clientfieldfloat(alpha)
PRVM_DECLARE_clientfieldfloat(bouncefactor)
PRVM_DECLARE_clientfieldfloat(bouncestop)
PRVM_DECLARE_clientfieldfloat(colormap)
PRVM_DECLARE_clientfieldfloat(dphitcontentsmask)
PRVM_DECLARE_clientfieldfloat(drawmask)
PRVM_DECLARE_clientfieldfloat(effects)
PRVM_DECLARE_clientfieldfloat(entnum)
PRVM_DECLARE_clientfieldfloat(flags)
PRVM_DECLARE_clientfieldfloat(frame)
PRVM_DECLARE_clientfieldfloat(frame1time)
PRVM_DECLARE_clientfieldfloat(frame2)
PRVM_DECLARE_clientfieldfloat(frame2time)
PRVM_DECLARE_clientfieldfloat(frame3)
PRVM_DECLARE_clientfieldfloat(frame3time)
PRVM_DECLARE_clientfieldfloat(frame4)
PRVM_DECLARE_clientfieldfloat(frame4time)
PRVM_DECLARE_clientfieldfloat(gravity)
PRVM_DECLARE_clientfieldfloat(ideal_yaw)
PRVM_DECLARE_clientfieldfloat(idealpitch)
PRVM_DECLARE_clientfieldfloat(jointtype)
PRVM_DECLARE_clientfieldfloat(lerpfrac)
PRVM_DECLARE_clientfieldfloat(lerpfrac3)
PRVM_DECLARE_clientfieldfloat(lerpfrac4)
PRVM_DECLARE_clientfieldfloat(mass)
PRVM_DECLARE_clientfieldfloat(modelindex)
PRVM_DECLARE_clientfieldfloat(movetype)
PRVM_DECLARE_clientfieldfloat(nextthink)
PRVM_DECLARE_clientfieldfloat(pitch_speed)
PRVM_DECLARE_clientfieldfloat(renderflags)
PRVM_DECLARE_clientfieldfloat(scale)
PRVM_DECLARE_clientfieldfloat(shadertime)
PRVM_DECLARE_clientfieldfloat(skeletonindex)
PRVM_DECLARE_clientfieldfloat(skin)
PRVM_DECLARE_clientfieldfloat(solid)
PRVM_DECLARE_clientfieldfloat(tag_index)
PRVM_DECLARE_clientfieldfloat(userwavefunc_param0)
PRVM_DECLARE_clientfieldfloat(userwavefunc_param1)
PRVM_DECLARE_clientfieldfloat(userwavefunc_param2)
PRVM_DECLARE_clientfieldfloat(userwavefunc_param3)
PRVM_DECLARE_clientfieldfloat(yaw_speed)
PRVM_DECLARE_clientfieldfunction(blocked)
PRVM_DECLARE_clientfieldfunction(camera_transform)
PRVM_DECLARE_clientfieldfunction(predraw)
PRVM_DECLARE_clientfieldfunction(think)
PRVM_DECLARE_clientfieldfunction(touch)
PRVM_DECLARE_clientfieldfunction(use)
PRVM_DECLARE_clientfieldstring(classname)
PRVM_DECLARE_clientfieldstring(message)
PRVM_DECLARE_clientfieldstring(model)
PRVM_DECLARE_clientfieldstring(netname)
PRVM_DECLARE_clientfieldvector(absmax)
PRVM_DECLARE_clientfieldvector(absmin)
PRVM_DECLARE_clientfieldvector(angles)
PRVM_DECLARE_clientfieldvector(avelocity)
PRVM_DECLARE_clientfieldvector(colormod)
PRVM_DECLARE_clientfieldvector(glowmod)
PRVM_DECLARE_clientfieldvector(maxs)
PRVM_DECLARE_clientfieldvector(mins)
PRVM_DECLARE_clientfieldvector(movedir)
PRVM_DECLARE_clientfieldvector(oldorigin)
PRVM_DECLARE_clientfieldvector(origin)
PRVM_DECLARE_clientfieldvector(size)
PRVM_DECLARE_clientfieldvector(velocity)
PRVM_DECLARE_clientfieldvector(modellight_ambient)
PRVM_DECLARE_clientfieldvector(modellight_diffuse)
PRVM_DECLARE_clientfieldvector(modellight_dir)
PRVM_DECLARE_clientfunction(CSQC_ConsoleCommand)
PRVM_DECLARE_clientfunction(CSQC_Ent_Remove)
PRVM_DECLARE_clientfunction(CSQC_Ent_Spawn)
PRVM_DECLARE_clientfunction(CSQC_Ent_Update)
PRVM_DECLARE_clientfunction(CSQC_Event)
PRVM_DECLARE_clientfunction(CSQC_Event_Sound)
PRVM_DECLARE_clientfunction(CSQC_Init)
PRVM_DECLARE_clientfunction(CSQC_InputEvent)
PRVM_DECLARE_clientfunction(CSQC_Parse_CenterPrint)
PRVM_DECLARE_clientfunction(CSQC_Parse_Print)
PRVM_DECLARE_clientfunction(CSQC_Parse_StuffCmd)
PRVM_DECLARE_clientfunction(CSQC_Parse_TempEntity)
PRVM_DECLARE_clientfunction(CSQC_Shutdown)
PRVM_DECLARE_clientfunction(CSQC_UpdateView)
PRVM_DECLARE_clientfunction(GameCommand)
PRVM_DECLARE_clientfunction(Gecko_Query)
PRVM_DECLARE_clientfunction(URI_Get_Callback)
PRVM_DECLARE_clientglobaledict(other)
PRVM_DECLARE_clientglobaledict(self)
PRVM_DECLARE_clientglobaledict(trace_ent)
PRVM_DECLARE_clientglobaledict(world)
PRVM_DECLARE_clientglobalfloat(clientcommandframe)
PRVM_DECLARE_clientglobalfloat(coop)
PRVM_DECLARE_clientglobalfloat(deathmatch)
PRVM_DECLARE_clientglobalfloat(dmg_save)
PRVM_DECLARE_clientglobalfloat(dmg_take)
PRVM_DECLARE_clientglobalfloat(drawfont)
PRVM_DECLARE_clientglobalfloat(frametime)
PRVM_DECLARE_clientglobalfloat(gettaginfo_parent)
PRVM_DECLARE_clientglobalvector(getlight_ambient)
PRVM_DECLARE_clientglobalvector(getlight_diffuse)
PRVM_DECLARE_clientglobalvector(getlight_dir)
PRVM_DECLARE_clientglobalfloat(input_buttons)
PRVM_DECLARE_clientglobalfloat(input_timelength)
PRVM_DECLARE_clientglobalfloat(intermission)
PRVM_DECLARE_clientglobalfloat(maxclients)
PRVM_DECLARE_clientglobalfloat(movevar_accelerate)
PRVM_DECLARE_clientglobalfloat(movevar_airaccelerate)
PRVM_DECLARE_clientglobalfloat(movevar_entgravity)
PRVM_DECLARE_clientglobalfloat(movevar_friction)
PRVM_DECLARE_clientglobalfloat(movevar_gravity)
PRVM_DECLARE_clientglobalfloat(movevar_maxspeed)
PRVM_DECLARE_clientglobalfloat(movevar_spectatormaxspeed)
PRVM_DECLARE_clientglobalfloat(movevar_stopspeed)
PRVM_DECLARE_clientglobalfloat(movevar_wateraccelerate)
PRVM_DECLARE_clientglobalfloat(movevar_waterfriction)
PRVM_DECLARE_clientglobalfloat(particle_airfriction)
PRVM_DECLARE_clientglobalfloat(particle_alpha)
PRVM_DECLARE_clientglobalfloat(particle_alphafade)
PRVM_DECLARE_clientglobalfloat(particle_angle)
PRVM_DECLARE_clientglobalfloat(particle_blendmode)
PRVM_DECLARE_clientglobalfloat(particle_bounce)
PRVM_DECLARE_clientglobalfloat(particle_delaycollision)
PRVM_DECLARE_clientglobalfloat(particle_delayspawn)
PRVM_DECLARE_clientglobalfloat(particle_gravity)
PRVM_DECLARE_clientglobalfloat(particle_liquidfriction)
PRVM_DECLARE_clientglobalfloat(particle_orientation)
PRVM_DECLARE_clientglobalfloat(particle_originjitter)
PRVM_DECLARE_clientglobalfloat(particle_qualityreduction)
PRVM_DECLARE_clientglobalfloat(particle_size)
PRVM_DECLARE_clientglobalfloat(particle_sizeincrease)
PRVM_DECLARE_clientglobalfloat(particle_spin)
PRVM_DECLARE_clientglobalfloat(particle_stainalpha)
PRVM_DECLARE_clientglobalfloat(particle_stainsize)
PRVM_DECLARE_clientglobalfloat(particle_staintex)
PRVM_DECLARE_clientglobalfloat(particle_stretch)
PRVM_DECLARE_clientglobalfloat(particle_tex)
PRVM_DECLARE_clientglobalfloat(particle_time)
PRVM_DECLARE_clientglobalfloat(particle_type)
PRVM_DECLARE_clientglobalfloat(particle_velocityjitter)
PRVM_DECLARE_clientglobalfloat(particles_alphamax)
PRVM_DECLARE_clientglobalfloat(particles_alphamin)
PRVM_DECLARE_clientglobalfloat(player_localentnum)
PRVM_DECLARE_clientglobalfloat(player_localnum)
PRVM_DECLARE_clientglobalfloat(require_spawnfunc_prefix)
PRVM_DECLARE_clientglobalfloat(sb_showscores)
PRVM_DECLARE_clientglobalfloat(servercommandframe)
PRVM_DECLARE_clientglobalfloat(serverdeltatime)
PRVM_DECLARE_clientglobalfloat(serverprevtime)
PRVM_DECLARE_clientglobalfloat(servertime)
PRVM_DECLARE_clientglobalfloat(time)
PRVM_DECLARE_clientglobalfloat(trace_allsolid)
PRVM_DECLARE_clientglobalfloat(trace_dphitcontents)
PRVM_DECLARE_clientglobalfloat(trace_dphitq3surfaceflags)
PRVM_DECLARE_clientglobalfloat(trace_dpstartcontents)
PRVM_DECLARE_clientglobalfloat(trace_fraction)
PRVM_DECLARE_clientglobalfloat(trace_inopen)
PRVM_DECLARE_clientglobalfloat(trace_inwater)
PRVM_DECLARE_clientglobalfloat(trace_networkentity)
PRVM_DECLARE_clientglobalfloat(trace_plane_dist)
PRVM_DECLARE_clientglobalfloat(trace_startsolid)
PRVM_DECLARE_clientglobalfloat(transparent_offset)
PRVM_DECLARE_clientglobalstring(gettaginfo_name)
PRVM_DECLARE_clientglobalstring(mapname)
PRVM_DECLARE_clientglobalstring(trace_dphittexturename)
PRVM_DECLARE_clientglobalvector(dmg_origin)
PRVM_DECLARE_clientglobalvector(drawfontscale)
PRVM_DECLARE_clientglobalvector(gettaginfo_forward)
PRVM_DECLARE_clientglobalvector(gettaginfo_offset)
PRVM_DECLARE_clientglobalvector(gettaginfo_right)
PRVM_DECLARE_clientglobalvector(gettaginfo_up)
PRVM_DECLARE_clientglobalvector(input_angles)
PRVM_DECLARE_clientglobalvector(input_movevalues)
PRVM_DECLARE_clientglobalvector(particle_color1)
PRVM_DECLARE_clientglobalvector(particle_color2)
PRVM_DECLARE_clientglobalvector(particle_staincolor1)
PRVM_DECLARE_clientglobalvector(particle_staincolor2)
PRVM_DECLARE_clientglobalvector(particles_colormax)
PRVM_DECLARE_clientglobalvector(particles_colormin)
PRVM_DECLARE_clientglobalvector(pmove_inwater)
PRVM_DECLARE_clientglobalvector(pmove_maxs)
PRVM_DECLARE_clientglobalvector(pmove_mins)
PRVM_DECLARE_clientglobalvector(pmove_onground)
PRVM_DECLARE_clientglobalvector(pmove_org)
PRVM_DECLARE_clientglobalvector(pmove_vel)
PRVM_DECLARE_clientglobalvector(trace_endpos)
PRVM_DECLARE_clientglobalvector(trace_plane_normal)
PRVM_DECLARE_clientglobalvector(v_forward)
PRVM_DECLARE_clientglobalvector(v_right)
PRVM_DECLARE_clientglobalvector(v_up)
PRVM_DECLARE_clientglobalvector(view_angles)
PRVM_DECLARE_clientglobalvector(view_punchangle)
PRVM_DECLARE_clientglobalvector(view_punchvector)
PRVM_DECLARE_field(SendEntity)
PRVM_DECLARE_field(SendFlags)
PRVM_DECLARE_field(Version)
PRVM_DECLARE_field(absmax)
PRVM_DECLARE_field(absmin)
PRVM_DECLARE_field(aiment)
PRVM_DECLARE_field(alpha)
PRVM_DECLARE_field(ammo_cells)
PRVM_DECLARE_field(ammo_cells1)
PRVM_DECLARE_field(ammo_lava_nails)
PRVM_DECLARE_field(ammo_multi_rockets)
PRVM_DECLARE_field(ammo_nails)
PRVM_DECLARE_field(ammo_nails1)
PRVM_DECLARE_field(ammo_plasma)
PRVM_DECLARE_field(ammo_rockets)
PRVM_DECLARE_field(ammo_rockets1)
PRVM_DECLARE_field(ammo_shells)
PRVM_DECLARE_field(ammo_shells1)
PRVM_DECLARE_field(angles)
PRVM_DECLARE_field(armortype)
PRVM_DECLARE_field(armorvalue)
PRVM_DECLARE_field(avelocity)
PRVM_DECLARE_field(blocked)
PRVM_DECLARE_field(bouncefactor)
PRVM_DECLARE_field(bouncestop)
PRVM_DECLARE_field(button0)
PRVM_DECLARE_field(button1)
PRVM_DECLARE_field(button2)
PRVM_DECLARE_field(button3)
PRVM_DECLARE_field(button4)
PRVM_DECLARE_field(button5)
PRVM_DECLARE_field(button6)
PRVM_DECLARE_field(button7)
PRVM_DECLARE_field(button8)
PRVM_DECLARE_field(button9)
PRVM_DECLARE_field(button10)
PRVM_DECLARE_field(button11)
PRVM_DECLARE_field(button12)
PRVM_DECLARE_field(button13)
PRVM_DECLARE_field(button14)
PRVM_DECLARE_field(button15)
PRVM_DECLARE_field(button16)
PRVM_DECLARE_field(buttonchat)
PRVM_DECLARE_field(buttonuse)
PRVM_DECLARE_field(camera_transform)
PRVM_DECLARE_field(chain)
PRVM_DECLARE_field(classname)
PRVM_DECLARE_field(clientcamera)
PRVM_DECLARE_field(clientcolors)
PRVM_DECLARE_field(clientstatus)
PRVM_DECLARE_field(color)
PRVM_DECLARE_field(colormap)
PRVM_DECLARE_field(colormod)
PRVM_DECLARE_field(contentstransition)
PRVM_DECLARE_field(crypto_encryptmethod)
PRVM_DECLARE_field(crypto_idfp)
PRVM_DECLARE_field(crypto_keyfp)
PRVM_DECLARE_field(crypto_mykeyfp)
PRVM_DECLARE_field(crypto_signmethod)
PRVM_DECLARE_field(currentammo)
PRVM_DECLARE_field(cursor_active)
PRVM_DECLARE_field(cursor_screen)
PRVM_DECLARE_field(cursor_trace_endpos)
PRVM_DECLARE_field(cursor_trace_ent)
PRVM_DECLARE_field(cursor_trace_start)
PRVM_DECLARE_field(customizeentityforclient)
PRVM_DECLARE_field(deadflag)
PRVM_DECLARE_field(disableclientprediction)
PRVM_DECLARE_field(discardabledemo)
PRVM_DECLARE_field(dmg_inflictor)
PRVM_DECLARE_field(dmg_save)
PRVM_DECLARE_field(dmg_take)
PRVM_DECLARE_field(dphitcontentsmask)
PRVM_DECLARE_field(drawmask)
PRVM_DECLARE_field(drawonlytoclient)
PRVM_DECLARE_field(effects)
PRVM_DECLARE_field(enemy)
PRVM_DECLARE_field(entnum)
PRVM_DECLARE_field(exteriormodeltoclient)
PRVM_DECLARE_field(fixangle)
PRVM_DECLARE_field(flags)
PRVM_DECLARE_field(frags)
PRVM_DECLARE_field(frame)
PRVM_DECLARE_field(frame1time)
PRVM_DECLARE_field(frame2)
PRVM_DECLARE_field(frame2time)
PRVM_DECLARE_field(frame3)
PRVM_DECLARE_field(frame3time)
PRVM_DECLARE_field(frame4)
PRVM_DECLARE_field(frame4time)
PRVM_DECLARE_field(fullbright)
PRVM_DECLARE_field(glow_color)
PRVM_DECLARE_field(glow_size)
PRVM_DECLARE_field(glow_trail)
PRVM_DECLARE_field(glowmod)
PRVM_DECLARE_field(goalentity)
PRVM_DECLARE_field(gravity)
PRVM_DECLARE_field(groundentity)
PRVM_DECLARE_field(health)
PRVM_DECLARE_field(ideal_yaw)
PRVM_DECLARE_field(idealpitch)
PRVM_DECLARE_field(impulse)
PRVM_DECLARE_field(items)
PRVM_DECLARE_field(items2)
PRVM_DECLARE_field(jointtype)
PRVM_DECLARE_field(lerpfrac)
PRVM_DECLARE_field(lerpfrac3)
PRVM_DECLARE_field(lerpfrac4)
PRVM_DECLARE_field(light_lev)
PRVM_DECLARE_field(ltime)
PRVM_DECLARE_field(mass)
PRVM_DECLARE_field(max_health)
PRVM_DECLARE_field(maxs)
PRVM_DECLARE_field(message)
PRVM_DECLARE_field(mins)
PRVM_DECLARE_field(model)
PRVM_DECLARE_field(modelflags)
PRVM_DECLARE_field(modelindex)
PRVM_DECLARE_field(movedir)
PRVM_DECLARE_field(movement)
PRVM_DECLARE_field(movetype)
PRVM_DECLARE_field(movetypesteplandevent)
PRVM_DECLARE_field(netaddress)
PRVM_DECLARE_field(netname)
PRVM_DECLARE_field(nextthink)
PRVM_DECLARE_field(nodrawtoclient)
PRVM_DECLARE_field(noise)
PRVM_DECLARE_field(noise1)
PRVM_DECLARE_field(noise2)
PRVM_DECLARE_field(noise3)
PRVM_DECLARE_field(oldorigin)
PRVM_DECLARE_field(origin)
PRVM_DECLARE_field(owner)
PRVM_DECLARE_field(pflags)
PRVM_DECLARE_field(ping)
PRVM_DECLARE_field(ping_movementloss)
PRVM_DECLARE_field(ping_packetloss)
PRVM_DECLARE_field(pitch_speed)
PRVM_DECLARE_field(playermodel)
PRVM_DECLARE_field(playerskin)
PRVM_DECLARE_field(pmodel)
PRVM_DECLARE_field(predraw)
PRVM_DECLARE_field(punchangle)
PRVM_DECLARE_field(punchvector)
PRVM_DECLARE_field(renderamt)
PRVM_DECLARE_field(renderflags)
PRVM_DECLARE_field(scale)
PRVM_DECLARE_field(sendcomplexanimation)
PRVM_DECLARE_field(shadertime)
PRVM_DECLARE_field(size)
PRVM_DECLARE_field(skeletonindex)
PRVM_DECLARE_field(skin)
PRVM_DECLARE_field(solid)
PRVM_DECLARE_field(sounds)
PRVM_DECLARE_field(spawnflags)
PRVM_DECLARE_field(style)
PRVM_DECLARE_field(tag_entity)
PRVM_DECLARE_field(tag_index)
PRVM_DECLARE_field(takedamage)
PRVM_DECLARE_field(target)
PRVM_DECLARE_field(targetname)
PRVM_DECLARE_field(team)
PRVM_DECLARE_field(teleport_time)
PRVM_DECLARE_field(think)
PRVM_DECLARE_field(touch)
PRVM_DECLARE_field(traileffectnum)
PRVM_DECLARE_field(use)
PRVM_DECLARE_field(userwavefunc_param0)
PRVM_DECLARE_field(userwavefunc_param1)
PRVM_DECLARE_field(userwavefunc_param2)
PRVM_DECLARE_field(userwavefunc_param3)
PRVM_DECLARE_field(v_angle)
PRVM_DECLARE_field(velocity)
PRVM_DECLARE_field(modellight_ambient)
PRVM_DECLARE_field(modellight_diffuse)
PRVM_DECLARE_field(modellight_dir)
PRVM_DECLARE_field(view_ofs)
PRVM_DECLARE_field(viewmodelforclient)
PRVM_DECLARE_field(viewzoom)
PRVM_DECLARE_field(waterlevel)
PRVM_DECLARE_field(watertype)
PRVM_DECLARE_field(weapon)
PRVM_DECLARE_field(weaponframe)
PRVM_DECLARE_field(weaponmodel)
PRVM_DECLARE_field(yaw_speed)
PRVM_DECLARE_function(CSQC_ConsoleCommand)
PRVM_DECLARE_function(CSQC_Ent_Remove)
PRVM_DECLARE_function(CSQC_Ent_Spawn)
PRVM_DECLARE_function(CSQC_Ent_Update)
PRVM_DECLARE_function(CSQC_Event)
PRVM_DECLARE_function(CSQC_Event_Sound)
PRVM_DECLARE_function(CSQC_Init)
PRVM_DECLARE_function(CSQC_InputEvent)
PRVM_DECLARE_function(CSQC_Parse_CenterPrint)
PRVM_DECLARE_function(CSQC_Parse_Print)
PRVM_DECLARE_function(CSQC_Parse_StuffCmd)
PRVM_DECLARE_function(CSQC_Parse_TempEntity)
PRVM_DECLARE_function(CSQC_Shutdown)
PRVM_DECLARE_function(CSQC_UpdateView)
PRVM_DECLARE_function(ClientConnect)
PRVM_DECLARE_function(ClientDisconnect)
PRVM_DECLARE_function(ClientKill)
PRVM_DECLARE_function(EndFrame)
PRVM_DECLARE_function(GameCommand)
PRVM_DECLARE_function(Gecko_Query)
PRVM_DECLARE_function(PlayerPostThink)
PRVM_DECLARE_function(PlayerPreThink)
PRVM_DECLARE_function(PutClientInServer)
PRVM_DECLARE_function(RestoreGame)
PRVM_DECLARE_function(SV_ChangeTeam)
PRVM_DECLARE_function(SV_OnEntityNoSpawnFunction)
PRVM_DECLARE_function(SV_OnEntityPostSpawnFunction)
PRVM_DECLARE_function(SV_OnEntityPreSpawnFunction)
PRVM_DECLARE_function(SV_ParseClientCommand)
PRVM_DECLARE_function(SV_PausedTic)
PRVM_DECLARE_function(SV_PlayerPhysics)
PRVM_DECLARE_function(SV_Shutdown)
PRVM_DECLARE_function(SetChangeParms)
PRVM_DECLARE_function(SetNewParms)
PRVM_DECLARE_function(StartFrame)
PRVM_DECLARE_function(URI_Get_Callback)
PRVM_DECLARE_function(m_draw)
PRVM_DECLARE_function(m_init)
PRVM_DECLARE_function(m_keydown)
PRVM_DECLARE_function(m_keyup)
PRVM_DECLARE_function(m_newmap)
PRVM_DECLARE_function(m_shutdown)
PRVM_DECLARE_function(m_toggle)
PRVM_DECLARE_function(main)
PRVM_DECLARE_global(SV_InitCmd)
PRVM_DECLARE_global(clientcommandframe)
PRVM_DECLARE_global(coop)
PRVM_DECLARE_global(deathmatch)
PRVM_DECLARE_global(dmg_origin)
PRVM_DECLARE_global(dmg_save)
PRVM_DECLARE_global(dmg_take)
PRVM_DECLARE_global(drawfont)
PRVM_DECLARE_global(drawfontscale)
PRVM_DECLARE_global(force_retouch)
PRVM_DECLARE_global(found_secrets)
PRVM_DECLARE_global(frametime)
PRVM_DECLARE_global(gettaginfo_forward)
PRVM_DECLARE_global(gettaginfo_name)
PRVM_DECLARE_global(gettaginfo_offset)
PRVM_DECLARE_global(gettaginfo_parent)
PRVM_DECLARE_global(gettaginfo_right)
PRVM_DECLARE_global(gettaginfo_up)
PRVM_DECLARE_global(getlight_ambient)
PRVM_DECLARE_global(getlight_diffuse)
PRVM_DECLARE_global(getlight_dir)
PRVM_DECLARE_global(input_angles)
PRVM_DECLARE_global(input_buttons)
PRVM_DECLARE_global(input_movevalues)
PRVM_DECLARE_global(input_timelength)
PRVM_DECLARE_global(intermission)
PRVM_DECLARE_global(killed_monsters)
PRVM_DECLARE_global(mapname)
PRVM_DECLARE_global(maxclients)
PRVM_DECLARE_global(movevar_accelerate)
PRVM_DECLARE_global(movevar_airaccelerate)
PRVM_DECLARE_global(movevar_entgravity)
PRVM_DECLARE_global(movevar_friction)
PRVM_DECLARE_global(movevar_gravity)
PRVM_DECLARE_global(movevar_maxspeed)
PRVM_DECLARE_global(movevar_spectatormaxspeed)
PRVM_DECLARE_global(movevar_stopspeed)
PRVM_DECLARE_global(movevar_wateraccelerate)
PRVM_DECLARE_global(movevar_waterfriction)
PRVM_DECLARE_global(msg_entity)
PRVM_DECLARE_global(other)
PRVM_DECLARE_global(parm1)
PRVM_DECLARE_global(parm2)
PRVM_DECLARE_global(parm3)
PRVM_DECLARE_global(parm4)
PRVM_DECLARE_global(parm5)
PRVM_DECLARE_global(parm6)
PRVM_DECLARE_global(parm7)
PRVM_DECLARE_global(parm8)
PRVM_DECLARE_global(parm9)
PRVM_DECLARE_global(parm10)
PRVM_DECLARE_global(parm11)
PRVM_DECLARE_global(parm12)
PRVM_DECLARE_global(parm13)
PRVM_DECLARE_global(parm14)
PRVM_DECLARE_global(parm15)
PRVM_DECLARE_global(parm16)
PRVM_DECLARE_global(particle_airfriction)
PRVM_DECLARE_global(particle_alpha)
PRVM_DECLARE_global(particle_alphafade)
PRVM_DECLARE_global(particle_angle)
PRVM_DECLARE_global(particle_blendmode)
PRVM_DECLARE_global(particle_bounce)
PRVM_DECLARE_global(particle_color1)
PRVM_DECLARE_global(particle_color2)
PRVM_DECLARE_global(particle_delaycollision)
PRVM_DECLARE_global(particle_delayspawn)
PRVM_DECLARE_global(particle_gravity)
PRVM_DECLARE_global(particle_liquidfriction)
PRVM_DECLARE_global(particle_orientation)
PRVM_DECLARE_global(particle_originjitter)
PRVM_DECLARE_global(particle_qualityreduction)
PRVM_DECLARE_global(particle_size)
PRVM_DECLARE_global(particle_sizeincrease)
PRVM_DECLARE_global(particle_spin)
PRVM_DECLARE_global(particle_stainalpha)
PRVM_DECLARE_global(particle_staincolor1)
PRVM_DECLARE_global(particle_staincolor2)
PRVM_DECLARE_global(particle_stainsize)
PRVM_DECLARE_global(particle_staintex)
PRVM_DECLARE_global(particle_stretch)
PRVM_DECLARE_global(particle_tex)
PRVM_DECLARE_global(particle_time)
PRVM_DECLARE_global(particle_type)
PRVM_DECLARE_global(particle_velocityjitter)
PRVM_DECLARE_global(particles_alphamax)
PRVM_DECLARE_global(particles_alphamin)
PRVM_DECLARE_global(particles_colormax)
PRVM_DECLARE_global(particles_colormin)
PRVM_DECLARE_global(player_localentnum)
PRVM_DECLARE_global(player_localnum)
PRVM_DECLARE_global(pmove_inwater)
PRVM_DECLARE_global(pmove_maxs)
PRVM_DECLARE_global(pmove_mins)
PRVM_DECLARE_global(pmove_onground)
PRVM_DECLARE_global(pmove_org)
PRVM_DECLARE_global(pmove_vel)
PRVM_DECLARE_global(require_spawnfunc_prefix)
PRVM_DECLARE_global(sb_showscores)
PRVM_DECLARE_global(self)
PRVM_DECLARE_global(servercommandframe)
PRVM_DECLARE_global(serverdeltatime)
PRVM_DECLARE_global(serverflags)
PRVM_DECLARE_global(serverprevtime)
PRVM_DECLARE_global(servertime)
PRVM_DECLARE_global(teamplay)
PRVM_DECLARE_global(time)
PRVM_DECLARE_global(total_monsters)
PRVM_DECLARE_global(total_secrets)
PRVM_DECLARE_global(trace_allsolid)
PRVM_DECLARE_global(trace_dphitcontents)
PRVM_DECLARE_global(trace_dphitq3surfaceflags)
PRVM_DECLARE_global(trace_dphittexturename)
PRVM_DECLARE_global(trace_dpstartcontents)
PRVM_DECLARE_global(trace_endpos)
PRVM_DECLARE_global(trace_ent)
PRVM_DECLARE_global(trace_fraction)
PRVM_DECLARE_global(trace_inopen)
PRVM_DECLARE_global(trace_inwater)
PRVM_DECLARE_global(trace_networkentity)
PRVM_DECLARE_global(trace_plane_dist)
PRVM_DECLARE_global(trace_plane_normal)
PRVM_DECLARE_global(trace_startsolid)
PRVM_DECLARE_global(transparent_offset)
PRVM_DECLARE_global(v_forward)
PRVM_DECLARE_global(v_right)
PRVM_DECLARE_global(v_up)
PRVM_DECLARE_global(view_angles)
PRVM_DECLARE_global(view_punchangle)
PRVM_DECLARE_global(view_punchvector)
PRVM_DECLARE_global(world)
PRVM_DECLARE_global(worldstatus)
PRVM_DECLARE_menufieldstring(classname)
PRVM_DECLARE_menufunction(GameCommand)
PRVM_DECLARE_menufunction(Gecko_Query)
PRVM_DECLARE_menufunction(URI_Get_Callback)
PRVM_DECLARE_menufunction(m_draw)
PRVM_DECLARE_menufunction(m_init)
PRVM_DECLARE_menufunction(m_keydown)
PRVM_DECLARE_menufunction(m_keyup)
PRVM_DECLARE_menufunction(m_newmap)
PRVM_DECLARE_menufunction(m_shutdown)
PRVM_DECLARE_menufunction(m_toggle)
PRVM_DECLARE_menuglobaledict(self)
PRVM_DECLARE_menuglobalfloat(drawfont)
PRVM_DECLARE_menuglobalfloat(require_spawnfunc_prefix)
PRVM_DECLARE_menuglobalvector(drawfontscale)
PRVM_DECLARE_serverfieldedict(aiment)
PRVM_DECLARE_serverfieldedict(chain)
PRVM_DECLARE_serverfieldedict(clientcamera)
PRVM_DECLARE_serverfieldedict(cursor_trace_ent)
PRVM_DECLARE_serverfieldedict(dmg_inflictor)
PRVM_DECLARE_serverfieldedict(drawonlytoclient)
PRVM_DECLARE_serverfieldedict(enemy)
PRVM_DECLARE_serverfieldedict(exteriormodeltoclient)
PRVM_DECLARE_serverfieldedict(goalentity)
PRVM_DECLARE_serverfieldedict(groundentity)
PRVM_DECLARE_serverfieldedict(nodrawtoclient)
PRVM_DECLARE_serverfieldedict(owner)
PRVM_DECLARE_serverfieldedict(tag_entity)
PRVM_DECLARE_serverfieldedict(viewmodelforclient)
PRVM_DECLARE_serverfieldfloat(SendFlags)
PRVM_DECLARE_serverfieldfloat(Version)
PRVM_DECLARE_serverfieldfloat(alpha)
PRVM_DECLARE_serverfieldfloat(ammo_cells)
PRVM_DECLARE_serverfieldfloat(ammo_cells1)
PRVM_DECLARE_serverfieldfloat(ammo_lava_nails)
PRVM_DECLARE_serverfieldfloat(ammo_multi_rockets)
PRVM_DECLARE_serverfieldfloat(ammo_nails)
PRVM_DECLARE_serverfieldfloat(ammo_nails1)
PRVM_DECLARE_serverfieldfloat(ammo_plasma)
PRVM_DECLARE_serverfieldfloat(ammo_rockets)
PRVM_DECLARE_serverfieldfloat(ammo_rockets1)
PRVM_DECLARE_serverfieldfloat(ammo_shells)
PRVM_DECLARE_serverfieldfloat(ammo_shells1)
PRVM_DECLARE_serverfieldfloat(armortype)
PRVM_DECLARE_serverfieldfloat(armorvalue)
PRVM_DECLARE_serverfieldfloat(bouncefactor)
PRVM_DECLARE_serverfieldfloat(bouncestop)
PRVM_DECLARE_serverfieldfloat(button0)
PRVM_DECLARE_serverfieldfloat(button1)
PRVM_DECLARE_serverfieldfloat(button2)
PRVM_DECLARE_serverfieldfloat(button3)
PRVM_DECLARE_serverfieldfloat(button4)
PRVM_DECLARE_serverfieldfloat(button5)
PRVM_DECLARE_serverfieldfloat(button6)
PRVM_DECLARE_serverfieldfloat(button7)
PRVM_DECLARE_serverfieldfloat(button8)
PRVM_DECLARE_serverfieldfloat(button9)
PRVM_DECLARE_serverfieldfloat(button10)
PRVM_DECLARE_serverfieldfloat(button11)
PRVM_DECLARE_serverfieldfloat(button12)
PRVM_DECLARE_serverfieldfloat(button13)
PRVM_DECLARE_serverfieldfloat(button14)
PRVM_DECLARE_serverfieldfloat(button15)
PRVM_DECLARE_serverfieldfloat(button16)
PRVM_DECLARE_serverfieldfloat(buttonchat)
PRVM_DECLARE_serverfieldfloat(buttonuse)
PRVM_DECLARE_serverfieldfloat(clientcolors)
PRVM_DECLARE_serverfieldfloat(colormap)
PRVM_DECLARE_serverfieldfloat(currentammo)
PRVM_DECLARE_serverfieldfloat(cursor_active)
PRVM_DECLARE_serverfieldfloat(deadflag)
PRVM_DECLARE_serverfieldfloat(disableclientprediction)
PRVM_DECLARE_serverfieldfloat(discardabledemo)
PRVM_DECLARE_serverfieldfloat(dmg_save)
PRVM_DECLARE_serverfieldfloat(dmg_take)
PRVM_DECLARE_serverfieldfloat(dphitcontentsmask)
PRVM_DECLARE_serverfieldfloat(effects)
PRVM_DECLARE_serverfieldfloat(fixangle)
PRVM_DECLARE_serverfieldfloat(flags)
PRVM_DECLARE_serverfieldfloat(frags)
PRVM_DECLARE_serverfieldfloat(frame)
PRVM_DECLARE_serverfieldfloat(frame1time)
PRVM_DECLARE_serverfieldfloat(frame2)
PRVM_DECLARE_serverfieldfloat(frame2time)
PRVM_DECLARE_serverfieldfloat(frame3)
PRVM_DECLARE_serverfieldfloat(frame3time)
PRVM_DECLARE_serverfieldfloat(frame4)
PRVM_DECLARE_serverfieldfloat(frame4time)
PRVM_DECLARE_serverfieldfloat(fullbright)
PRVM_DECLARE_serverfieldfloat(glow_color)
PRVM_DECLARE_serverfieldfloat(glow_size)
PRVM_DECLARE_serverfieldfloat(glow_trail)
PRVM_DECLARE_serverfieldfloat(gravity)
PRVM_DECLARE_serverfieldfloat(health)
PRVM_DECLARE_serverfieldfloat(ideal_yaw)
PRVM_DECLARE_serverfieldfloat(idealpitch)
PRVM_DECLARE_serverfieldfloat(impulse)
PRVM_DECLARE_serverfieldfloat(items)
PRVM_DECLARE_serverfieldfloat(items2)
PRVM_DECLARE_serverfieldfloat(jointtype)
PRVM_DECLARE_serverfieldfloat(lerpfrac)
PRVM_DECLARE_serverfieldfloat(lerpfrac3)
PRVM_DECLARE_serverfieldfloat(lerpfrac4)
PRVM_DECLARE_serverfieldfloat(light_lev)
PRVM_DECLARE_serverfieldfloat(ltime)
PRVM_DECLARE_serverfieldfloat(mass)
PRVM_DECLARE_serverfieldfloat(max_health)
PRVM_DECLARE_serverfieldfloat(modelflags)
PRVM_DECLARE_serverfieldfloat(modelindex)
PRVM_DECLARE_serverfieldfloat(movetype)
PRVM_DECLARE_serverfieldfloat(nextthink)
PRVM_DECLARE_serverfieldfloat(pflags)
PRVM_DECLARE_serverfieldfloat(ping)
PRVM_DECLARE_serverfieldfloat(ping_movementloss)
PRVM_DECLARE_serverfieldfloat(ping_packetloss)
PRVM_DECLARE_serverfieldfloat(pitch_speed)
PRVM_DECLARE_serverfieldfloat(pmodel)
PRVM_DECLARE_serverfieldfloat(renderamt)
PRVM_DECLARE_serverfieldfloat(scale)
PRVM_DECLARE_serverfieldfloat(sendcomplexanimation)
PRVM_DECLARE_serverfieldfloat(skeletonindex)
PRVM_DECLARE_serverfieldfloat(skin)
PRVM_DECLARE_serverfieldfloat(solid)
PRVM_DECLARE_serverfieldfloat(sounds)
PRVM_DECLARE_serverfieldfloat(spawnflags)
PRVM_DECLARE_serverfieldfloat(style)
PRVM_DECLARE_serverfieldfloat(tag_index)
PRVM_DECLARE_serverfieldfloat(takedamage)
PRVM_DECLARE_serverfieldfloat(team)
PRVM_DECLARE_serverfieldfloat(teleport_time)
PRVM_DECLARE_serverfieldfloat(traileffectnum)
PRVM_DECLARE_serverfieldfloat(viewzoom)
PRVM_DECLARE_serverfieldfloat(waterlevel)
PRVM_DECLARE_serverfieldfloat(watertype)
PRVM_DECLARE_serverfieldfloat(weapon)
PRVM_DECLARE_serverfieldfloat(weaponframe)
PRVM_DECLARE_serverfieldfloat(yaw_speed)
PRVM_DECLARE_serverfieldfunction(SendEntity)
PRVM_DECLARE_serverfieldfunction(blocked)
PRVM_DECLARE_serverfieldfunction(camera_transform)
PRVM_DECLARE_serverfieldfunction(contentstransition)
PRVM_DECLARE_serverfieldfunction(customizeentityforclient)
PRVM_DECLARE_serverfieldfunction(movetypesteplandevent)
PRVM_DECLARE_serverfieldfunction(think)
PRVM_DECLARE_serverfieldfunction(touch)
PRVM_DECLARE_serverfieldfunction(use)
PRVM_DECLARE_serverfieldstring(classname)
PRVM_DECLARE_serverfieldstring(clientstatus)
PRVM_DECLARE_serverfieldstring(crypto_encryptmethod)
PRVM_DECLARE_serverfieldstring(crypto_idfp)
PRVM_DECLARE_serverfieldstring(crypto_keyfp)
PRVM_DECLARE_serverfieldstring(crypto_mykeyfp)
PRVM_DECLARE_serverfieldstring(crypto_signmethod)
PRVM_DECLARE_serverfieldstring(message)
PRVM_DECLARE_serverfieldstring(model)
PRVM_DECLARE_serverfieldstring(netaddress)
PRVM_DECLARE_serverfieldstring(netname)
PRVM_DECLARE_serverfieldstring(noise)
PRVM_DECLARE_serverfieldstring(noise1)
PRVM_DECLARE_serverfieldstring(noise2)
PRVM_DECLARE_serverfieldstring(noise3)
PRVM_DECLARE_serverfieldstring(playermodel)
PRVM_DECLARE_serverfieldstring(playerskin)
PRVM_DECLARE_serverfieldstring(target)
PRVM_DECLARE_serverfieldstring(targetname)
PRVM_DECLARE_serverfieldstring(weaponmodel)
PRVM_DECLARE_serverfieldvector(absmax)
PRVM_DECLARE_serverfieldvector(absmin)
PRVM_DECLARE_serverfieldvector(angles)
PRVM_DECLARE_serverfieldvector(avelocity)
PRVM_DECLARE_serverfieldvector(color)
PRVM_DECLARE_serverfieldvector(colormod)
PRVM_DECLARE_serverfieldvector(cursor_screen)
PRVM_DECLARE_serverfieldvector(cursor_trace_endpos)
PRVM_DECLARE_serverfieldvector(cursor_trace_start)
PRVM_DECLARE_serverfieldvector(glowmod)
PRVM_DECLARE_serverfieldvector(maxs)
PRVM_DECLARE_serverfieldvector(mins)
PRVM_DECLARE_serverfieldvector(movedir)
PRVM_DECLARE_serverfieldvector(movement)
PRVM_DECLARE_serverfieldvector(oldorigin)
PRVM_DECLARE_serverfieldvector(origin)
PRVM_DECLARE_serverfieldvector(punchangle)
PRVM_DECLARE_serverfieldvector(punchvector)
PRVM_DECLARE_serverfieldvector(size)
PRVM_DECLARE_serverfieldvector(v_angle)
PRVM_DECLARE_serverfieldvector(velocity)
PRVM_DECLARE_serverfieldvector(view_ofs)
PRVM_DECLARE_serverfunction(ClientConnect)
PRVM_DECLARE_serverfunction(ClientDisconnect)
PRVM_DECLARE_serverfunction(ClientKill)
PRVM_DECLARE_serverfunction(EndFrame)
PRVM_DECLARE_serverfunction(GameCommand)
PRVM_DECLARE_serverfunction(PlayerPostThink)
PRVM_DECLARE_serverfunction(PlayerPreThink)
PRVM_DECLARE_serverfunction(PutClientInServer)
PRVM_DECLARE_serverfunction(RestoreGame)
PRVM_DECLARE_serverfunction(SV_ChangeTeam)
PRVM_DECLARE_serverfunction(SV_OnEntityNoSpawnFunction)
PRVM_DECLARE_serverfunction(SV_OnEntityPostSpawnFunction)
PRVM_DECLARE_serverfunction(SV_OnEntityPreSpawnFunction)
PRVM_DECLARE_serverfunction(SV_ParseClientCommand)
PRVM_DECLARE_serverfunction(SV_PausedTic)
PRVM_DECLARE_serverfunction(SV_PlayerPhysics)
PRVM_DECLARE_serverfunction(SV_Shutdown)
PRVM_DECLARE_serverfunction(SetChangeParms)
PRVM_DECLARE_serverfunction(SetNewParms)
PRVM_DECLARE_serverfunction(StartFrame)
PRVM_DECLARE_serverfunction(URI_Get_Callback)
PRVM_DECLARE_serverfunction(main)
PRVM_DECLARE_serverglobaledict(msg_entity)
PRVM_DECLARE_serverglobaledict(other)
PRVM_DECLARE_serverglobaledict(self)
PRVM_DECLARE_serverglobaledict(trace_ent)
PRVM_DECLARE_serverglobaledict(world)
PRVM_DECLARE_serverglobalfloat(coop)
PRVM_DECLARE_serverglobalfloat(deathmatch)
PRVM_DECLARE_serverglobalfloat(force_retouch)
PRVM_DECLARE_serverglobalfloat(found_secrets)
PRVM_DECLARE_serverglobalfloat(frametime)
PRVM_DECLARE_serverglobalfloat(gettaginfo_parent)
PRVM_DECLARE_serverglobalfloat(killed_monsters)
PRVM_DECLARE_serverglobalfloat(parm1)
PRVM_DECLARE_serverglobalfloat(parm2)
PRVM_DECLARE_serverglobalfloat(parm3)
PRVM_DECLARE_serverglobalfloat(parm4)
PRVM_DECLARE_serverglobalfloat(parm5)
PRVM_DECLARE_serverglobalfloat(parm6)
PRVM_DECLARE_serverglobalfloat(parm7)
PRVM_DECLARE_serverglobalfloat(parm8)
PRVM_DECLARE_serverglobalfloat(parm9)
PRVM_DECLARE_serverglobalfloat(parm10)
PRVM_DECLARE_serverglobalfloat(parm11)
PRVM_DECLARE_serverglobalfloat(parm12)
PRVM_DECLARE_serverglobalfloat(parm13)
PRVM_DECLARE_serverglobalfloat(parm14)
PRVM_DECLARE_serverglobalfloat(parm15)
PRVM_DECLARE_serverglobalfloat(parm16)
PRVM_DECLARE_serverglobalfloat(require_spawnfunc_prefix)
PRVM_DECLARE_serverglobalfloat(serverflags)
PRVM_DECLARE_serverglobalfloat(teamplay)
PRVM_DECLARE_serverglobalfloat(time)
PRVM_DECLARE_serverglobalfloat(total_monsters)
PRVM_DECLARE_serverglobalfloat(total_secrets)
PRVM_DECLARE_serverglobalfloat(trace_allsolid)
PRVM_DECLARE_serverglobalfloat(trace_dphitcontents)
PRVM_DECLARE_serverglobalfloat(trace_dphitq3surfaceflags)
PRVM_DECLARE_serverglobalfloat(trace_dpstartcontents)
PRVM_DECLARE_serverglobalfloat(trace_fraction)
PRVM_DECLARE_serverglobalfloat(trace_inopen)
PRVM_DECLARE_serverglobalfloat(trace_inwater)
PRVM_DECLARE_serverglobalfloat(trace_plane_dist)
PRVM_DECLARE_serverglobalfloat(trace_startsolid)
PRVM_DECLARE_serverglobalstring(SV_InitCmd)
PRVM_DECLARE_serverglobalstring(gettaginfo_name)
PRVM_DECLARE_serverglobalstring(mapname)
PRVM_DECLARE_serverglobalstring(trace_dphittexturename)
PRVM_DECLARE_serverglobalstring(worldstatus)
PRVM_DECLARE_serverglobalvector(gettaginfo_forward)
PRVM_DECLARE_serverglobalvector(gettaginfo_offset)
PRVM_DECLARE_serverglobalvector(gettaginfo_right)
PRVM_DECLARE_serverglobalvector(gettaginfo_up)
PRVM_DECLARE_serverglobalvector(trace_endpos)
PRVM_DECLARE_serverglobalvector(trace_plane_normal)
PRVM_DECLARE_serverglobalvector(v_forward)
PRVM_DECLARE_serverglobalvector(v_right)
PRVM_DECLARE_serverglobalvector(v_up)