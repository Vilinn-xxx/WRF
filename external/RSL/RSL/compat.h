/***********************************************************************
     
                              COPYRIGHT
     
     The following is a notice of limited availability of the code and 
     Government license and disclaimer which must be included in the 
     prologue of the code and in all source listings of the code.
     
     Copyright notice
       (c) 1977  University of Chicago
     
     Permission is hereby granted to use, reproduce, prepare 
     derivative works, and to redistribute to others at no charge.  If 
     you distribute a copy or copies of the Software, or you modify a 
     copy or copies of the Software or any portion of it, thus forming 
     a work based on the Software and make and/or distribute copies of 
     such work, you must meet the following conditions:
     
          a) If you make a copy of the Software (modified or verbatim) 
             it must include the copyright notice and Government       
             license and disclaimer.
     
          b) You must cause the modified Software to carry prominent   
             notices stating that you changed specified portions of    
             the Software.
     
     This software was authored by:
     
     Argonne National Laboratory
     J. Michalakes: (630) 252-6646; email: michalak@mcs.anl.gov
     Mathematics and Computer Science Division
     Argonne National Laboratory, Argonne, IL  60439
     
     ARGONNE NATIONAL LABORATORY (ANL), WITH FACILITIES IN THE STATES 
     OF ILLINOIS AND IDAHO, IS OWNED BY THE UNITED STATES GOVERNMENT, 
     AND OPERATED BY THE UNIVERSITY OF CHICAGO UNDER PROVISION OF A 
     CONTRACT WITH THE DEPARTMENT OF ENERGY.
     
                      GOVERNMENT LICENSE AND DISCLAIMER
     
     This computer code material was prepared, in part, as an account 
     of work sponsored by an agency of the United States Government.
     The Government is granted for itself and others acting on its 
     behalf a paid-up, nonexclusive, irrevocable worldwide license in 
     this data to reproduce, prepare derivative works, distribute 
     copies to the public, perform publicly and display publicly, and 
     to permit others to do so.  NEITHER THE UNITED STATES GOVERNMENT 
     NOR ANY AGENCY THEREOF, NOR THE UNIVERSITY OF CHICAGO, NOR ANY OF 
     THEIR EMPLOYEES, MAKES ANY WARRANTY, EXPRESS OR IMPLIED, OR 
     ASSUMES ANY LEGAL LIABILITY OR RESPONSIBILITY FOR THE ACCURACY, 
     COMPLETENESS, OR USEFULNESS OF ANY INFORMATION, APPARATUS, 
     PRODUCT, OR PROCESS DISCLOSED, OR REPRESENTS THAT ITS USE WOULD 
     NOT INFRINGE PRIVATELY OWNED RIGHTS.

***************************************************************************/



#ifndef COMPAT_H
#define COMPAT_H

/* 
   Note that when using these macros, you *HAVE* to leave a space
   between the routine name and its argument list.  Example:

	 RSL_C_COMPUTE_PROC (P)

   This applies both to declaration and use from C.
*/

#ifndef T3D

#  ifndef NOUNDERSCORE
#   define RSL_INITIALIZE		rsl_initialize_
#   define RSL_SHUTDOWN		rsl_shutdown_
#   define RSL_MESH		rsl_mesh_
#   define RSL_MOTHER_DOMAIN	rsl_mother_domain_
#   define RSL_SPAWN_REGULAR_NEST	rsl_spawn_regular_nest_
#   define RSL_SPAWN_REGULAR_NEST1	rsl_spawn_regular_nest1_
#   define RSL_SPAWN_IRREG_NEST   rsl_spawn_irreg_nest_
#   define RSL_GET_BDY_LPT        rsl_get_bdy_lpt_
#   define RSL_GET_BDY_LARRAY     rsl_get_bdy_larray_
#   define RSL_GET_BDY_LARRAY2     rsl_get_bdy_larray2_
#   define RSL_GET_BDY_GPT        rsl_get_bdy_gpt_
#   define RSL_GET_BDY_GARRAY     rsl_get_bdy_garray_
#   define RSL_GET_BDY4_LPT       rsl_get_bdy4_lpt_
#   define RSL_GET_BDY4_LARRAY    rsl_get_bdy4_larray_
#   define RSL_GET_BDY4_GPT       rsl_get_bdy4_gpt_
#   define RSL_GET_BDY4_GARRAY    rsl_get_bdy4_garray_
#   define RSL_PATCH_DECOMPOSE	rsl_patch_decompose_
#   define RSL_FDECOMPOSE	        rsl_fdecompose_
#   define RSL_FCN_REMAP    	rsl_fcn_remap_
#   define RSL_FCN_DECOMPOSE	rsl_fcn_decompose_
#   define RSL_NEW_DECOMPOSITION	rsl_new_decomposition_
#   define RSL_IAMMONITOR         rsl_iammonitor_
#   define RSL_C_IAMMONITOR       rsl_c_iammonitor_
#   define RSL_IAMCOMPUTE         rsl_iamcompute_
#   define RSL_C_IAMCOMPUTE       rsl_c_iamcompute_
#   define RSL_PHYS2COMP_C	rsl_phys2comp_c_
#   define RSL_COMP2PHYS_C	rsl_comp2phys_c_
#   define RSL_CREATE_STENCIL	rsl_create_stencil_
#   define RSL_CREATE_MESSAGE     rsl_create_message_
#   define RSL_BUILD_MESSAGE      rsl_build_message_
#   define RSL_BLANK_MESSAGE      rsl_blank_message_
#   define RSL_DESCRIBE_STENCIL   rsl_describe_stencil_
#   define RSL_EXCH_STENCIL       rsl_exch_stencil_
#   define RSL_COMPILE_STENCIL    rsl_compile_stencil_
#   define RSL_INIT_NEXTCELL      rsl_init_nextcell_
#   define RSL_INIT_GHOST         rsl_init_ghost_
#   define RSL_C_NEXTCELL         rsl_c_nextcell_
#   define RSL_READ               rsl_read_
#   define RSL_WRITE              rsl_write_
#   define RSL_IOSERVE            rsl_ioserve_
#   define RSL_IO_SHUTDOWN        rsl_io_shutdown_
#   define RSL_INIT_FORTRAN       rsl_init_fortran_
#   define RSL_CLOSE              rsl_close_
#   define SHOW_DOMAIN_DECOMP     show_domain_decomp_
#   define GET_DOMAIN_DECOMP      get_domain_decomp_
#   define SHOW_STEN_DIAGS        show_sten_diags_
#   define SHOW_MESSAGE           show_message_
#   define SHOW_STENCIL           show_stencil_

#   define RSL_CREATE_PERIOD    rsl_create_period_
#   define RSL_DESCRIBE_PERIOD   rsl_describe_period_
#   define RSL_EXCH_PERIOD       rsl_exch_period_
#   define RSL_COMPILE_PERIOD    rsl_compile_period_

#   define FORT_COMPLEXREAD 	fort_complexread_
#   define FORT_INTREAD 		fort_intread_
#   define FORT_CHARACTERREAD 	fort_characterread_
#   define FORT_DOUBLEREAD 	fort_doubleread_
#   define FORT_REALREAD 		fort_realread_
#   define FORT_COMPLEXWRITE 	fort_complexwrite_
#   define FORT_INTWRITE 		fort_intwrite_
#   define FORT_CHARACTERWRITE 	fort_characterwrite_
#   define FORT_DOUBLEWRITE 	fort_doublewrite_
#   define FORT_REALWRITE 	fort_realwrite_
#   define FORT_CLOSE          	fort_close_

#   define RSL_MM_BDY_IN          rsl_mm_bdy_in_
#   define RSL_MM_DIST_BDY        rsl_mm_dist_bdy_
#   define RSL_READ_REPL          rsl_read_repl_
#   define RSL_READ_REPLW         rsl_read_replw_
#   define FORT_BDYIN_REAL        fort_bdyin_real_
#   define FORT_BDYIN_DBL         fort_bdyin_dbl_

#   define RSL_F_SET_PADAREA      rsl_f_set_padarea_
#   define RSL_SET_PADAREA        rsl_set_padarea_

#   define RSL_TO_CHILD_INFO      rsl_to_child_info_
#   define RSL_TO_CHILD_MSG       rsl_to_child_msg_
#   define RSL_BCAST_MSGS         rsl_bcast_msgs_
#   define RSL_FROM_PARENT_INFO   rsl_from_parent_info_
#   define RSL_FROM_PARENT_MSG    rsl_from_parent_msg_

#   define RSL_TO_PARENT_INFO     rsl_to_parent_info_
#   define RSL_TO_PARENT_MSG      rsl_to_parent_msg_
#   define RSL_MERGE_MSGS         rsl_merge_msgs_
#   define RSL_FROM_CHILD_INFO    rsl_from_child_info_
#   define RSL_FROM_CHILD_MSG     rsl_from_child_msg_

#   define RSL_WITHIN_NESTED_BOUNDARY  rsl_within_nested_boundary_
#   define RSL_WITHIN_NESTED_BETA  rsl_within_nested_beta_

#   define RSL_NL                 rsl_nl_


#   define RSL_FUNIT_CLOSE        rsl_funit_close_
#   define RSL_ORDER              rsl_order_

#   define RSL_DEBUG		rsl_debug_

#   define RSL_MON_BCAST		rsl_mon_bcast_

#  ifdef MPI
#   define MPI_INIT_F             mpi_init_f_
#  endif

/* socket stuff */
#   define RSL_SOCKOPEN           rsl_sockopen_
#   define RSL_SOCKWRITE          rsl_sockwrite_
#   define RSL_SOCKREAD           rsl_sockread_		/* not yet */
#   define RSL_SOCKCLOSE          rsl_sockclose_

/* slab stuff added 1/9/95 */
#   define RSL_INIT_NEXTISLAB     rsl_init_nextislab_
#   define RSL_C_NEXTISLAB        rsl_c_nextislab_

#   define RSL_COMPUTE            rsl_compute_
#   define RSL_GET_RUN_INFO       rsl_get_run_info_
#   define RSL_GET_RUN_INFOP      rsl_get_run_infop_
#   define RSL_REG_RUN_INFOP      rsl_reg_run_infop_

#   define RSL_CHILD_INFO         rsl_child_info_
#   define RSL_CHILD_INFO1        rsl_child_info1_

#   define RSL_REMAP_STATE        rsl_remap_state_
#   define RSL_DESCRIBE_STATE     rsl_describe_state_

#   define RSL_PATCH_DECOMP       rsl_patch_decomp_
#   define SET_DEF_DECOMP_FCN     set_def_decomp_fcn_
#   define SET_DEF_DECOMP_INFO     set_def_decomp_info_

#   define BOUNDARY_SAFE		boundary_safe_

#   define RSL_BDY_TIEBRK		rsl_bdy_tiebrk_

#   define RSL_OLD_OFFSETS        rsl_old_offsets_

#   define RSL_ERROR_DUP          rsl_error_dup_

#   define RSL_OUTPUT_BUFFER_WRITE rsl_output_buffer_write_
#   define RSL_OUTPUT_BUFFER_YES   rsl_output_buffer_yes_
#   define RSL_OUTPUT_BUFFER_NO   rsl_output_buffer_no_
#   define RSL_IO_NODE_YES        rsl_io_node_yes_
#   define RSL_IO_NODE_NO         rsl_io_node_no_
#   define RSL_WRITE_MM5V3_SM_HEADER rsl_write_mm5v3_sm_header_
#   define RSL_WRITE_MM5V3_BIG_HEADER rsl_write_mm5v3_big_header_
#   define RSL_WRITE_1D_DATA     rsl_write_1d_data_

#   define RSL_REGISTER_F90     rsl_register_f90_
#   define RSL_START_REGISTER_F90     rsl_start_register_f90_
#   define RSL_END_REGISTER_F90     rsl_end_register_f90_

#   define RSL_RESET_STAGING   rsl_reset_staging_

#  else

#   define RSL_INITIALIZE		rsl_initialize
#   define RSL_SHUTDOWN		rsl_shutdown
#   define RSL_MESH		rsl_mesh
#   define RSL_MOTHER_DOMAIN	rsl_mother_domain
#   define RSL_SPAWN_REGULAR_NEST	rsl_spawn_regular_nest
#   define RSL_SPAWN_REGULAR_NEST1	rsl_spawn_regular_nest1
#   define RSL_SPAWN_IRREG_NEST   rsl_spawn_irreg_nest
#   define RSL_GET_BDY_LPT        rsl_get_bdy_lpt
#   define RSL_GET_BDY_LARRAY     rsl_get_bdy_larray
#   define RSL_GET_BDY_LARRAY2     rsl_get_bdy_larray2
#   define RSL_GET_BDY_GPT        rsl_get_bdy_gpt
#   define RSL_GET_BDY_GARRAY     rsl_get_bdy_garray
#   define RSL_GET_BDY4_LPT        rsl_get_bdy4_lpt
#   define RSL_GET_BDY4_LARRAY     rsl_get_bdy4_larray
#   define RSL_GET_BDY4_GPT        rsl_get_bdy4_gpt
#   define RSL_GET_BDY4_GARRAY     rsl_get_bdy4_garray
#   define RSL_PATCH_DECOMPOSE	rsl_patch_decompose
#   define RSL_FDECOMPOSE	        rsl_fdecompose
#   define RSL_FCN_REMAP    	rsl_fcn_remap
#   define RSL_FCN_DECOMPOSE	rsl_fcn_decompose
#   define RSL_NEW_DECOMPOSITION	rsl_new_decomposition
#   define RSL_IAMMONITOR         rsl_iammonitor
#   define RSL_C_IAMMONITOR       rsl_c_iammonitor
#   define RSL_IAMCOMPUTE         rsl_iamcompute
#   define RSL_C_IAMCOMPUTE       rsl_c_iamcompute
#   define RSL_PHYS2COMP_C	rsl_phys2comp_c
#   define RSL_COMP2PHYS_C	rsl_comp2phys_c
#   define RSL_CREATE_STENCIL	rsl_create_stencil
#   define RSL_CREATE_MESSAGE     rsl_create_message
#   define RSL_BUILD_MESSAGE      rsl_build_message
#   define RSL_BLANK_MESSAGE      rsl_blank_message
#   define RSL_DESCRIBE_STENCIL   rsl_describe_stencil
#   define RSL_EXCH_STENCIL       rsl_exch_stencil
#   define RSL_COMPILE_STENCIL    rsl_compile_stencil
#   define RSL_INIT_NEXTCELL      rsl_init_nextcell
#   define RSL_INIT_GHOST         rsl_init_ghost
#   define RSL_C_NEXTCELL         rsl_c_nextcell
#   define RSL_READ               rsl_read
#   define RSL_WRITE              rsl_write
#   define RSL_IOSERVE            rsl_ioserve
#   define RSL_IO_SHUTDOWN        rsl_io_shutdown
#   define RSL_INIT_FORTRAN       rsl_init_fortran
#   define RSL_CLOSE              rsl_close
#   define SHOW_DOMAIN_DECOMP     show_domain_decomp
#   define GET_DOMAIN_DECOMP      get_domain_decomp
#   define SHOW_STEN_DIAGS        show_sten_diags
#   define SHOW_MESSAGE           show_message
#   define SHOW_STENCIL           show_stencil

#   define RSL_CREATE_PERIOD    rsl_create_period
#   define RSL_DESCRIBE_PERIOD   rsl_describe_period
#   define RSL_EXCH_PERIOD       rsl_exch_period
#   define RSL_COMPILE_PERIOD    rsl_compile_period

#   define FORT_COMPLEXREAD 	fort_complexread
#   define FORT_INTREAD 		fort_intread
#   define FORT_CHARACTERREAD 	fort_characterread
#   define FORT_DOUBLEREAD 	fort_doubleread
#   define FORT_REALREAD 		fort_realread
#   define FORT_COMPLEXWRITE 	fort_complexwrite
#   define FORT_INTWRITE 		fort_intwrite
#   define FORT_CHARACTERWRITE 	fort_characterwrite
#   define FORT_DOUBLEWRITE 	fort_doublewrite
#   define FORT_REALWRITE 	fort_realwrite
#   define FORT_CLOSE   	 	fort_close

#   define RSL_MM_BDY_IN          rsl_mm_bdy_in
#   define RSL_MM_DIST_BDY        rsl_mm_dist_bdy
#   define RSL_READ_REPL          rsl_read_repl
#   define RSL_READ_REPLW         rsl_read_replw
#   define FORT_BDYIN_REAL        fort_bdyin_real
#   define FORT_BDYIN_DBL         fort_bdyin_dbl

#   define RSL_F_SET_PADAREA      rsl_f_set_padarea
#   define RSL_SET_PADAREA        rsl_set_padarea

#   define RSL_TO_CHILD_INFO      rsl_to_child_info
#   define RSL_TO_CHILD_MSG       rsl_to_child_msg
#   define RSL_BCAST_MSGS         rsl_bcast_msgs
#   define RSL_FROM_PARENT_INFO   rsl_from_parent_info
#   define RSL_FROM_PARENT_MSG    rsl_from_parent_msg

#   define RSL_TO_PARENT_INFO     rsl_to_parent_info
#   define RSL_TO_PARENT_MSG      rsl_to_parent_msg
#   define RSL_MERGE_MSGS         rsl_merge_msgs
#   define RSL_FROM_CHILD_INFO    rsl_from_child_info
#   define RSL_FROM_CHILD_MSG     rsl_from_child_msg

#   define RSL_WITHIN_NESTED_BOUNDARY  rsl_within_nested_boundary
#   define RSL_WITHIN_NESTED_BETA  rsl_within_nested_beta

#   define RSL_NL                 rsl_nl

#   define RSL_FUNIT_CLOSE        rsl_funit_close
#   define RSL_ORDER              rsl_order

#   define RSL_DEBUG		rsl_debug

#   define RSL_MON_BCAST		rsl_mon_bcast

#  ifdef MPI
#   define MPI_INIT_F             mpi_init_f
#  endif

/* socket stuff */
#   define RSL_SOCKOPEN           rsl_sockopen
#   define RSL_SOCKWRITE          rsl_sockwrite
#   define RSL_SOCKREAD           rsl_sockread		/* not yet */
#   define RSL_SOCKCLOSE          rsl_sockclose

/* slab stuff added 1/9/95 */
#   define RSL_INIT_NEXTISLAB     rsl_init_nextislab
#   define RSL_C_NEXTISLAB        rsl_c_nextislab

#   define RSL_COMPUTE            rsl_compute
#   define RSL_GET_RUN_INFO       rsl_get_run_info
#   define RSL_GET_RUN_INFOP      rsl_get_run_infop
#   define RSL_REG_RUN_INFOP      rsl_reg_run_infop

#   define RSL_CHILD_INFO         rsl_child_info
#   define RSL_CHILD_INFO1        rsl_child_info1

#   define RSL_REMAP_STATE        rsl_remap_state
#   define RSL_DESCRIBE_STATE     rsl_describe_state

#   define RSL_PATCH_DECOMP       rsl_patch_decomp
#   define SET_DEF_DECOMP_FCN     set_def_decomp_fcn
#   define SET_DEF_DECOMP_INFO     set_def_decomp_info

#   define BOUNDARY_SAFE		boundary_safe

#   define RSL_BDY_TIEBRK		rsl_bdy_tiebrk

#   define RSL_OLD_OFFSETS        rsl_old_offsets

#   define RSL_ERROR_DUP          rsl_error_dup

#   define RSL_OUTPUT_BUFFER_WRITE rsl_output_buffer_write
#   define RSL_OUTPUT_BUFFER_YES   rsl_output_buffer_yes
#   define RSL_OUTPUT_BUFFER_NO   rsl_output_buffer_no
#   define RSL_IO_NODE_YES        rsl_io_node_yes
#   define RSL_IO_NODE_NO         rsl_io_node_no
#   define RSL_WRITE_MM5V3_SM_HEADER rsl_write_mm5v3_sm_header
#   define RSL_WRITE_MM5V3_BIG_HEADER rsl_write_mm5v3_big_header
#   define RSL_WRITE_1D_DATA     rsl_write_1d_data

#   define RSL_REGISTER_F90     rsl_register_f90
#   define RSL_START_REGISTER_F90     rsl_start_register_f90
#   define RSL_END_REGISTER_F90     rsl_end_register_f90

#   define RSL_RESET_STAGING   rsl_reset_staging

#  endif
#endif

#endif /* nothing after this */
