// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "a0_Sobel_Loop_2_proc38.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic a0_Sobel_Loop_2_proc38::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic a0_Sobel_Loop_2_proc38::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<4> a0_Sobel_Loop_2_proc38::ap_ST_fsm_state1 = "1";
const sc_lv<4> a0_Sobel_Loop_2_proc38::ap_ST_fsm_state2 = "10";
const sc_lv<4> a0_Sobel_Loop_2_proc38::ap_ST_fsm_pp0_stage0 = "100";
const sc_lv<4> a0_Sobel_Loop_2_proc38::ap_ST_fsm_state5 = "1000";
const sc_lv<32> a0_Sobel_Loop_2_proc38::ap_const_lv32_0 = "00000000000000000000000000000000";
const bool a0_Sobel_Loop_2_proc38::ap_const_boolean_1 = true;
const sc_lv<32> a0_Sobel_Loop_2_proc38::ap_const_lv32_2 = "10";
const bool a0_Sobel_Loop_2_proc38::ap_const_boolean_0 = false;
const sc_lv<1> a0_Sobel_Loop_2_proc38::ap_const_lv1_1 = "1";
const sc_lv<32> a0_Sobel_Loop_2_proc38::ap_const_lv32_1 = "1";
const sc_lv<1> a0_Sobel_Loop_2_proc38::ap_const_lv1_0 = "0";
const sc_lv<31> a0_Sobel_Loop_2_proc38::ap_const_lv31_0 = "0000000000000000000000000000000";
const sc_lv<32> a0_Sobel_Loop_2_proc38::ap_const_lv32_3 = "11";
const sc_lv<31> a0_Sobel_Loop_2_proc38::ap_const_lv31_1 = "1";

a0_Sobel_Loop_2_proc38::a0_Sobel_Loop_2_proc38(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_pp0_stage0);

    SC_METHOD(thread_ap_block_pp0_stage0_11001);
    sensitive << ( p_dstx_V_V_empty_n );
    sensitive << ( p_dsty_V_V_empty_n );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( tmp_22_i_reg_251 );

    SC_METHOD(thread_ap_block_pp0_stage0_subdone);
    sensitive << ( p_dstx_V_V_empty_n );
    sensitive << ( p_dsty_V_V_empty_n );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( tmp_22_i_reg_251 );

    SC_METHOD(thread_ap_block_state1);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( p_dst_matx_rows_read_empty_n );
    sensitive << ( p_dst_matx_cols_read_empty_n );
    sensitive << ( p_dst_maty_cols_read_empty_n );

    SC_METHOD(thread_ap_block_state3_pp0_stage0_iter0);

    SC_METHOD(thread_ap_block_state4_pp0_stage0_iter1);
    sensitive << ( p_dstx_V_V_empty_n );
    sensitive << ( p_dsty_V_V_empty_n );
    sensitive << ( tmp_22_i_reg_251 );

    SC_METHOD(thread_ap_condition_pp0_exit_iter0_state3);
    sensitive << ( tmp_22_i_fu_177_p2 );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_done_reg );
    sensitive << ( tmp_20_i_fu_148_p2 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_ap_enable_pp0);
    sensitive << ( ap_idle_pp0 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_idle_pp0);
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_enable_reg_pp0_iter0 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( tmp_20_i_fu_148_p2 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_i1_cast_i_fu_140_p1);
    sensitive << ( i1_i_reg_110 );

    SC_METHOD(thread_i_fu_153_p2);
    sensitive << ( i1_i_reg_110 );

    SC_METHOD(thread_j2_cast_i_fu_169_p1);
    sensitive << ( j2_i_reg_121 );

    SC_METHOD(thread_j_fu_182_p2);
    sensitive << ( j2_i_reg_121 );

    SC_METHOD(thread_p_dst_matx_cols_read_blk_n);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( p_dst_matx_cols_read_empty_n );

    SC_METHOD(thread_p_dst_matx_cols_read_read);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( p_dst_matx_rows_read_empty_n );
    sensitive << ( p_dst_matx_cols_read_empty_n );
    sensitive << ( p_dst_maty_cols_read_empty_n );

    SC_METHOD(thread_p_dst_matx_data_V_address0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( p_sum_cast_i_fu_192_p1 );

    SC_METHOD(thread_p_dst_matx_data_V_ce0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_p_dst_matx_data_V_d0);
    sensitive << ( p_dstx_V_V_dout );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_p_dst_matx_data_V_we0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( tmp_22_i_reg_251 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_p_dst_matx_rows_read_blk_n);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( p_dst_matx_rows_read_empty_n );

    SC_METHOD(thread_p_dst_matx_rows_read_read);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( p_dst_matx_rows_read_empty_n );
    sensitive << ( p_dst_matx_cols_read_empty_n );
    sensitive << ( p_dst_maty_cols_read_empty_n );

    SC_METHOD(thread_p_dst_maty_cols_read_blk_n);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( p_dst_maty_cols_read_empty_n );

    SC_METHOD(thread_p_dst_maty_cols_read_read);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( p_dst_matx_rows_read_empty_n );
    sensitive << ( p_dst_matx_cols_read_empty_n );
    sensitive << ( p_dst_maty_cols_read_empty_n );

    SC_METHOD(thread_p_dst_maty_data_V_address0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( p_sum2_cast_i_fu_201_p1 );

    SC_METHOD(thread_p_dst_maty_data_V_ce0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_p_dst_maty_data_V_d0);
    sensitive << ( p_dsty_V_V_dout );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_p_dst_maty_data_V_we0);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( tmp_22_i_reg_251 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_p_dstx_V_V_blk_n);
    sensitive << ( p_dstx_V_V_empty_n );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( tmp_22_i_reg_251 );

    SC_METHOD(thread_p_dstx_V_V_read);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( tmp_22_i_reg_251 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_p_dsty_V_V_blk_n);
    sensitive << ( p_dsty_V_V_empty_n );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );
    sensitive << ( tmp_22_i_reg_251 );

    SC_METHOD(thread_p_dsty_V_V_read);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( tmp_22_i_reg_251 );
    sensitive << ( ap_block_pp0_stage0_11001 );

    SC_METHOD(thread_p_sum2_cast_i_fu_201_p1);
    sensitive << ( p_sum2_i_fu_197_p2 );

    SC_METHOD(thread_p_sum2_i_fu_197_p2);
    sensitive << ( tmp_24_i_reg_240 );
    sensitive << ( tmp_12_reg_245 );

    SC_METHOD(thread_p_sum_cast_i_fu_192_p1);
    sensitive << ( p_sum_i_fu_188_p2 );

    SC_METHOD(thread_p_sum_i_fu_188_p2);
    sensitive << ( tmp_23_i_reg_235 );
    sensitive << ( tmp_12_reg_245 );

    SC_METHOD(thread_tmp_10_fu_136_p1);
    sensitive << ( p_dst_maty_cols_read_dout );

    SC_METHOD(thread_tmp_11_fu_144_p1);
    sensitive << ( i1_i_reg_110 );

    SC_METHOD(thread_tmp_12_fu_173_p1);
    sensitive << ( j2_i_reg_121 );

    SC_METHOD(thread_tmp_20_i_fu_148_p2);
    sensitive << ( p_dst_matx_rows_read_1_reg_206 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i1_cast_i_fu_140_p1 );

    SC_METHOD(thread_tmp_22_i_fu_177_p2);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( p_dst_matx_cols_read_1_reg_211 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( j2_cast_i_fu_169_p1 );

    SC_METHOD(thread_tmp_23_i_fu_159_p2);
    sensitive << ( tmp_reg_216 );
    sensitive << ( tmp_11_fu_144_p1 );

    SC_METHOD(thread_tmp_24_i_fu_164_p2);
    sensitive << ( tmp_10_reg_221 );
    sensitive << ( tmp_11_fu_144_p1 );

    SC_METHOD(thread_tmp_fu_132_p1);
    sensitive << ( p_dst_matx_cols_read_dout );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( p_dst_matx_rows_read_empty_n );
    sensitive << ( p_dst_matx_cols_read_empty_n );
    sensitive << ( p_dst_maty_cols_read_empty_n );
    sensitive << ( tmp_20_i_fu_148_p2 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_22_i_fu_177_p2 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_block_pp0_stage0_subdone );

    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "0001";
    ap_enable_reg_pp0_iter1 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter0 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "a0_Sobel_Loop_2_proc38_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, p_dst_matx_rows_read_dout, "(port)p_dst_matx_rows_read_dout");
    sc_trace(mVcdFile, p_dst_matx_rows_read_empty_n, "(port)p_dst_matx_rows_read_empty_n");
    sc_trace(mVcdFile, p_dst_matx_rows_read_read, "(port)p_dst_matx_rows_read_read");
    sc_trace(mVcdFile, p_dst_matx_cols_read_dout, "(port)p_dst_matx_cols_read_dout");
    sc_trace(mVcdFile, p_dst_matx_cols_read_empty_n, "(port)p_dst_matx_cols_read_empty_n");
    sc_trace(mVcdFile, p_dst_matx_cols_read_read, "(port)p_dst_matx_cols_read_read");
    sc_trace(mVcdFile, p_dstx_V_V_dout, "(port)p_dstx_V_V_dout");
    sc_trace(mVcdFile, p_dstx_V_V_empty_n, "(port)p_dstx_V_V_empty_n");
    sc_trace(mVcdFile, p_dstx_V_V_read, "(port)p_dstx_V_V_read");
    sc_trace(mVcdFile, p_dst_matx_data_V_address0, "(port)p_dst_matx_data_V_address0");
    sc_trace(mVcdFile, p_dst_matx_data_V_ce0, "(port)p_dst_matx_data_V_ce0");
    sc_trace(mVcdFile, p_dst_matx_data_V_we0, "(port)p_dst_matx_data_V_we0");
    sc_trace(mVcdFile, p_dst_matx_data_V_d0, "(port)p_dst_matx_data_V_d0");
    sc_trace(mVcdFile, p_dst_maty_cols_read_dout, "(port)p_dst_maty_cols_read_dout");
    sc_trace(mVcdFile, p_dst_maty_cols_read_empty_n, "(port)p_dst_maty_cols_read_empty_n");
    sc_trace(mVcdFile, p_dst_maty_cols_read_read, "(port)p_dst_maty_cols_read_read");
    sc_trace(mVcdFile, p_dsty_V_V_dout, "(port)p_dsty_V_V_dout");
    sc_trace(mVcdFile, p_dsty_V_V_empty_n, "(port)p_dsty_V_V_empty_n");
    sc_trace(mVcdFile, p_dsty_V_V_read, "(port)p_dsty_V_V_read");
    sc_trace(mVcdFile, p_dst_maty_data_V_address0, "(port)p_dst_maty_data_V_address0");
    sc_trace(mVcdFile, p_dst_maty_data_V_ce0, "(port)p_dst_maty_data_V_ce0");
    sc_trace(mVcdFile, p_dst_maty_data_V_we0, "(port)p_dst_maty_data_V_we0");
    sc_trace(mVcdFile, p_dst_maty_data_V_d0, "(port)p_dst_maty_data_V_d0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_done_reg, "ap_done_reg");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, p_dst_matx_rows_read_blk_n, "p_dst_matx_rows_read_blk_n");
    sc_trace(mVcdFile, p_dst_matx_cols_read_blk_n, "p_dst_matx_cols_read_blk_n");
    sc_trace(mVcdFile, p_dstx_V_V_blk_n, "p_dstx_V_V_blk_n");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage0, "ap_CS_fsm_pp0_stage0");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter1, "ap_enable_reg_pp0_iter1");
    sc_trace(mVcdFile, ap_block_pp0_stage0, "ap_block_pp0_stage0");
    sc_trace(mVcdFile, tmp_22_i_reg_251, "tmp_22_i_reg_251");
    sc_trace(mVcdFile, p_dst_maty_cols_read_blk_n, "p_dst_maty_cols_read_blk_n");
    sc_trace(mVcdFile, p_dsty_V_V_blk_n, "p_dsty_V_V_blk_n");
    sc_trace(mVcdFile, j2_i_reg_121, "j2_i_reg_121");
    sc_trace(mVcdFile, p_dst_matx_rows_read_1_reg_206, "p_dst_matx_rows_read_1_reg_206");
    sc_trace(mVcdFile, ap_block_state1, "ap_block_state1");
    sc_trace(mVcdFile, p_dst_matx_cols_read_1_reg_211, "p_dst_matx_cols_read_1_reg_211");
    sc_trace(mVcdFile, tmp_fu_132_p1, "tmp_fu_132_p1");
    sc_trace(mVcdFile, tmp_reg_216, "tmp_reg_216");
    sc_trace(mVcdFile, tmp_10_fu_136_p1, "tmp_10_fu_136_p1");
    sc_trace(mVcdFile, tmp_10_reg_221, "tmp_10_reg_221");
    sc_trace(mVcdFile, tmp_20_i_fu_148_p2, "tmp_20_i_fu_148_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, i_fu_153_p2, "i_fu_153_p2");
    sc_trace(mVcdFile, i_reg_230, "i_reg_230");
    sc_trace(mVcdFile, tmp_23_i_fu_159_p2, "tmp_23_i_fu_159_p2");
    sc_trace(mVcdFile, tmp_23_i_reg_235, "tmp_23_i_reg_235");
    sc_trace(mVcdFile, tmp_24_i_fu_164_p2, "tmp_24_i_fu_164_p2");
    sc_trace(mVcdFile, tmp_24_i_reg_240, "tmp_24_i_reg_240");
    sc_trace(mVcdFile, tmp_12_fu_173_p1, "tmp_12_fu_173_p1");
    sc_trace(mVcdFile, tmp_12_reg_245, "tmp_12_reg_245");
    sc_trace(mVcdFile, ap_block_state3_pp0_stage0_iter0, "ap_block_state3_pp0_stage0_iter0");
    sc_trace(mVcdFile, ap_block_state4_pp0_stage0_iter1, "ap_block_state4_pp0_stage0_iter1");
    sc_trace(mVcdFile, ap_block_pp0_stage0_11001, "ap_block_pp0_stage0_11001");
    sc_trace(mVcdFile, tmp_22_i_fu_177_p2, "tmp_22_i_fu_177_p2");
    sc_trace(mVcdFile, j_fu_182_p2, "j_fu_182_p2");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter0, "ap_enable_reg_pp0_iter0");
    sc_trace(mVcdFile, ap_block_pp0_stage0_subdone, "ap_block_pp0_stage0_subdone");
    sc_trace(mVcdFile, ap_condition_pp0_exit_iter0_state3, "ap_condition_pp0_exit_iter0_state3");
    sc_trace(mVcdFile, i1_i_reg_110, "i1_i_reg_110");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, p_sum_cast_i_fu_192_p1, "p_sum_cast_i_fu_192_p1");
    sc_trace(mVcdFile, p_sum2_cast_i_fu_201_p1, "p_sum2_cast_i_fu_201_p1");
    sc_trace(mVcdFile, i1_cast_i_fu_140_p1, "i1_cast_i_fu_140_p1");
    sc_trace(mVcdFile, tmp_11_fu_144_p1, "tmp_11_fu_144_p1");
    sc_trace(mVcdFile, j2_cast_i_fu_169_p1, "j2_cast_i_fu_169_p1");
    sc_trace(mVcdFile, p_sum_i_fu_188_p2, "p_sum_i_fu_188_p2");
    sc_trace(mVcdFile, p_sum2_i_fu_197_p2, "p_sum2_i_fu_197_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_idle_pp0, "ap_idle_pp0");
    sc_trace(mVcdFile, ap_enable_pp0, "ap_enable_pp0");
#endif

    }
}

a0_Sobel_Loop_2_proc38::~a0_Sobel_Loop_2_proc38() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void a0_Sobel_Loop_2_proc38::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                    esl_seteq<1,1,1>(tmp_20_i_fu_148_p2.read(), ap_const_lv1_0))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state3.read()) && 
             esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_subdone.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(tmp_20_i_fu_148_p2.read(), ap_const_lv1_1) && 
                    esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_subdone.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state3.read()))) {
            ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state3.read() ^ ap_const_logic_1);
        } else if (esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_subdone.read())) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        } else if ((esl_seteq<1,1,1>(tmp_20_i_fu_148_p2.read(), ap_const_lv1_1) && 
                    esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
            ap_enable_reg_pp0_iter1 = ap_const_logic_0;
        }
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        i1_i_reg_110 = i_reg_230.read();
    } else if ((!(esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(p_dst_maty_cols_read_empty_n.read(), ap_const_logic_0) || esl_seteq<1,1,1>(p_dst_matx_cols_read_empty_n.read(), ap_const_logic_0) || esl_seteq<1,1,1>(p_dst_matx_rows_read_empty_n.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        i1_i_reg_110 = ap_const_lv31_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_22_i_fu_177_p2.read()))) {
        j2_i_reg_121 = j_fu_182_p2.read();
    } else if ((esl_seteq<1,1,1>(tmp_20_i_fu_148_p2.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        j2_i_reg_121 = ap_const_lv31_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_reg_230 = i_fu_153_p2.read();
    }
    if ((!(esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(p_dst_maty_cols_read_empty_n.read(), ap_const_logic_0) || esl_seteq<1,1,1>(p_dst_matx_cols_read_empty_n.read(), ap_const_logic_0) || esl_seteq<1,1,1>(p_dst_matx_rows_read_empty_n.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        p_dst_matx_cols_read_1_reg_211 = p_dst_matx_cols_read_dout.read();
        p_dst_matx_rows_read_1_reg_206 = p_dst_matx_rows_read_dout.read();
        tmp_10_reg_221 = tmp_10_fu_136_p1.read();
        tmp_reg_216 = tmp_fu_132_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        tmp_12_reg_245 = tmp_12_fu_173_p1.read();
        tmp_22_i_reg_251 = tmp_22_i_fu_177_p2.read();
    }
    if ((esl_seteq<1,1,1>(tmp_20_i_fu_148_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        tmp_23_i_reg_235 = tmp_23_i_fu_159_p2.read();
        tmp_24_i_reg_240 = tmp_24_i_fu_164_p2.read();
    }
}

void a0_Sobel_Loop_2_proc38::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[2];
}

void a0_Sobel_Loop_2_proc38::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void a0_Sobel_Loop_2_proc38::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void a0_Sobel_Loop_2_proc38::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[3];
}

void a0_Sobel_Loop_2_proc38::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void a0_Sobel_Loop_2_proc38::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && ((esl_seteq<1,1,1>(tmp_22_i_reg_251.read(), ap_const_lv1_1) && 
   esl_seteq<1,1,1>(ap_const_logic_0, p_dstx_V_V_empty_n.read())) || 
  (esl_seteq<1,1,1>(tmp_22_i_reg_251.read(), ap_const_lv1_1) && 
   esl_seteq<1,1,1>(ap_const_logic_0, p_dsty_V_V_empty_n.read()))));
}

void a0_Sobel_Loop_2_proc38::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && ((esl_seteq<1,1,1>(tmp_22_i_reg_251.read(), ap_const_lv1_1) && 
   esl_seteq<1,1,1>(ap_const_logic_0, p_dstx_V_V_empty_n.read())) || 
  (esl_seteq<1,1,1>(tmp_22_i_reg_251.read(), ap_const_lv1_1) && 
   esl_seteq<1,1,1>(ap_const_logic_0, p_dsty_V_V_empty_n.read()))));
}

void a0_Sobel_Loop_2_proc38::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(p_dst_maty_cols_read_empty_n.read(), ap_const_logic_0) || esl_seteq<1,1,1>(p_dst_matx_cols_read_empty_n.read(), ap_const_logic_0) || esl_seteq<1,1,1>(p_dst_matx_rows_read_empty_n.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void a0_Sobel_Loop_2_proc38::thread_ap_block_state3_pp0_stage0_iter0() {
    ap_block_state3_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void a0_Sobel_Loop_2_proc38::thread_ap_block_state4_pp0_stage0_iter1() {
    ap_block_state4_pp0_stage0_iter1 = ((esl_seteq<1,1,1>(tmp_22_i_reg_251.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, p_dstx_V_V_empty_n.read())) || (esl_seteq<1,1,1>(tmp_22_i_reg_251.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_const_logic_0, p_dsty_V_V_empty_n.read())));
}

void a0_Sobel_Loop_2_proc38::thread_ap_condition_pp0_exit_iter0_state3() {
    if (esl_seteq<1,1,1>(tmp_22_i_fu_177_p2.read(), ap_const_lv1_0)) {
        ap_condition_pp0_exit_iter0_state3 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state3 = ap_const_logic_0;
    }
}

void a0_Sobel_Loop_2_proc38::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(tmp_20_i_fu_148_p2.read(), ap_const_lv1_0))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void a0_Sobel_Loop_2_proc38::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void a0_Sobel_Loop_2_proc38::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void a0_Sobel_Loop_2_proc38::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void a0_Sobel_Loop_2_proc38::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(tmp_20_i_fu_148_p2.read(), ap_const_lv1_0))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void a0_Sobel_Loop_2_proc38::thread_i1_cast_i_fu_140_p1() {
    i1_cast_i_fu_140_p1 = esl_zext<32,31>(i1_i_reg_110.read());
}

void a0_Sobel_Loop_2_proc38::thread_i_fu_153_p2() {
    i_fu_153_p2 = (!ap_const_lv31_1.is_01() || !i1_i_reg_110.read().is_01())? sc_lv<31>(): (sc_biguint<31>(ap_const_lv31_1) + sc_biguint<31>(i1_i_reg_110.read()));
}

void a0_Sobel_Loop_2_proc38::thread_j2_cast_i_fu_169_p1() {
    j2_cast_i_fu_169_p1 = esl_zext<32,31>(j2_i_reg_121.read());
}

void a0_Sobel_Loop_2_proc38::thread_j_fu_182_p2() {
    j_fu_182_p2 = (!ap_const_lv31_1.is_01() || !j2_i_reg_121.read().is_01())? sc_lv<31>(): (sc_biguint<31>(ap_const_lv31_1) + sc_biguint<31>(j2_i_reg_121.read()));
}

void a0_Sobel_Loop_2_proc38::thread_p_dst_matx_cols_read_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        p_dst_matx_cols_read_blk_n = p_dst_matx_cols_read_empty_n.read();
    } else {
        p_dst_matx_cols_read_blk_n = ap_const_logic_1;
    }
}

void a0_Sobel_Loop_2_proc38::thread_p_dst_matx_cols_read_read() {
    if ((!(esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(p_dst_maty_cols_read_empty_n.read(), ap_const_logic_0) || esl_seteq<1,1,1>(p_dst_matx_cols_read_empty_n.read(), ap_const_logic_0) || esl_seteq<1,1,1>(p_dst_matx_rows_read_empty_n.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        p_dst_matx_cols_read_read = ap_const_logic_1;
    } else {
        p_dst_matx_cols_read_read = ap_const_logic_0;
    }
}

void a0_Sobel_Loop_2_proc38::thread_p_dst_matx_data_V_address0() {
    p_dst_matx_data_V_address0 =  (sc_lv<19>) (p_sum_cast_i_fu_192_p1.read());
}

void a0_Sobel_Loop_2_proc38::thread_p_dst_matx_data_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        p_dst_matx_data_V_ce0 = ap_const_logic_1;
    } else {
        p_dst_matx_data_V_ce0 = ap_const_logic_0;
    }
}

void a0_Sobel_Loop_2_proc38::thread_p_dst_matx_data_V_d0() {
    p_dst_matx_data_V_d0 = p_dstx_V_V_dout.read();
}

void a0_Sobel_Loop_2_proc38::thread_p_dst_matx_data_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(tmp_22_i_reg_251.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        p_dst_matx_data_V_we0 = ap_const_logic_1;
    } else {
        p_dst_matx_data_V_we0 = ap_const_logic_0;
    }
}

void a0_Sobel_Loop_2_proc38::thread_p_dst_matx_rows_read_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        p_dst_matx_rows_read_blk_n = p_dst_matx_rows_read_empty_n.read();
    } else {
        p_dst_matx_rows_read_blk_n = ap_const_logic_1;
    }
}

void a0_Sobel_Loop_2_proc38::thread_p_dst_matx_rows_read_read() {
    if ((!(esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(p_dst_maty_cols_read_empty_n.read(), ap_const_logic_0) || esl_seteq<1,1,1>(p_dst_matx_cols_read_empty_n.read(), ap_const_logic_0) || esl_seteq<1,1,1>(p_dst_matx_rows_read_empty_n.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        p_dst_matx_rows_read_read = ap_const_logic_1;
    } else {
        p_dst_matx_rows_read_read = ap_const_logic_0;
    }
}

void a0_Sobel_Loop_2_proc38::thread_p_dst_maty_cols_read_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        p_dst_maty_cols_read_blk_n = p_dst_maty_cols_read_empty_n.read();
    } else {
        p_dst_maty_cols_read_blk_n = ap_const_logic_1;
    }
}

void a0_Sobel_Loop_2_proc38::thread_p_dst_maty_cols_read_read() {
    if ((!(esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(p_dst_maty_cols_read_empty_n.read(), ap_const_logic_0) || esl_seteq<1,1,1>(p_dst_matx_cols_read_empty_n.read(), ap_const_logic_0) || esl_seteq<1,1,1>(p_dst_matx_rows_read_empty_n.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        p_dst_maty_cols_read_read = ap_const_logic_1;
    } else {
        p_dst_maty_cols_read_read = ap_const_logic_0;
    }
}

void a0_Sobel_Loop_2_proc38::thread_p_dst_maty_data_V_address0() {
    p_dst_maty_data_V_address0 =  (sc_lv<19>) (p_sum2_cast_i_fu_201_p1.read());
}

void a0_Sobel_Loop_2_proc38::thread_p_dst_maty_data_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        p_dst_maty_data_V_ce0 = ap_const_logic_1;
    } else {
        p_dst_maty_data_V_ce0 = ap_const_logic_0;
    }
}

void a0_Sobel_Loop_2_proc38::thread_p_dst_maty_data_V_d0() {
    p_dst_maty_data_V_d0 = p_dsty_V_V_dout.read();
}

void a0_Sobel_Loop_2_proc38::thread_p_dst_maty_data_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(tmp_22_i_reg_251.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        p_dst_maty_data_V_we0 = ap_const_logic_1;
    } else {
        p_dst_maty_data_V_we0 = ap_const_logic_0;
    }
}

void a0_Sobel_Loop_2_proc38::thread_p_dstx_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(tmp_22_i_reg_251.read(), ap_const_lv1_1))) {
        p_dstx_V_V_blk_n = p_dstx_V_V_empty_n.read();
    } else {
        p_dstx_V_V_blk_n = ap_const_logic_1;
    }
}

void a0_Sobel_Loop_2_proc38::thread_p_dstx_V_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(tmp_22_i_reg_251.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        p_dstx_V_V_read = ap_const_logic_1;
    } else {
        p_dstx_V_V_read = ap_const_logic_0;
    }
}

void a0_Sobel_Loop_2_proc38::thread_p_dsty_V_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(tmp_22_i_reg_251.read(), ap_const_lv1_1))) {
        p_dsty_V_V_blk_n = p_dsty_V_V_empty_n.read();
    } else {
        p_dsty_V_V_blk_n = ap_const_logic_1;
    }
}

void a0_Sobel_Loop_2_proc38::thread_p_dsty_V_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(tmp_22_i_reg_251.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        p_dsty_V_V_read = ap_const_logic_1;
    } else {
        p_dsty_V_V_read = ap_const_logic_0;
    }
}

void a0_Sobel_Loop_2_proc38::thread_p_sum2_cast_i_fu_201_p1() {
    p_sum2_cast_i_fu_201_p1 = esl_zext<32,20>(p_sum2_i_fu_197_p2.read());
}

void a0_Sobel_Loop_2_proc38::thread_p_sum2_i_fu_197_p2() {
    p_sum2_i_fu_197_p2 = (!tmp_24_i_reg_240.read().is_01() || !tmp_12_reg_245.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_24_i_reg_240.read()) + sc_biguint<20>(tmp_12_reg_245.read()));
}

void a0_Sobel_Loop_2_proc38::thread_p_sum_cast_i_fu_192_p1() {
    p_sum_cast_i_fu_192_p1 = esl_zext<32,20>(p_sum_i_fu_188_p2.read());
}

void a0_Sobel_Loop_2_proc38::thread_p_sum_i_fu_188_p2() {
    p_sum_i_fu_188_p2 = (!tmp_23_i_reg_235.read().is_01() || !tmp_12_reg_245.read().is_01())? sc_lv<20>(): (sc_biguint<20>(tmp_23_i_reg_235.read()) + sc_biguint<20>(tmp_12_reg_245.read()));
}

void a0_Sobel_Loop_2_proc38::thread_tmp_10_fu_136_p1() {
    tmp_10_fu_136_p1 = p_dst_maty_cols_read_dout.read().range(20-1, 0);
}

void a0_Sobel_Loop_2_proc38::thread_tmp_11_fu_144_p1() {
    tmp_11_fu_144_p1 = i1_i_reg_110.read().range(20-1, 0);
}

void a0_Sobel_Loop_2_proc38::thread_tmp_12_fu_173_p1() {
    tmp_12_fu_173_p1 = j2_i_reg_121.read().range(20-1, 0);
}

void a0_Sobel_Loop_2_proc38::thread_tmp_20_i_fu_148_p2() {
    tmp_20_i_fu_148_p2 = (!i1_cast_i_fu_140_p1.read().is_01() || !p_dst_matx_rows_read_1_reg_206.read().is_01())? sc_lv<1>(): (sc_bigint<32>(i1_cast_i_fu_140_p1.read()) < sc_bigint<32>(p_dst_matx_rows_read_1_reg_206.read()));
}

void a0_Sobel_Loop_2_proc38::thread_tmp_22_i_fu_177_p2() {
    tmp_22_i_fu_177_p2 = (!j2_cast_i_fu_169_p1.read().is_01() || !p_dst_matx_cols_read_1_reg_211.read().is_01())? sc_lv<1>(): (sc_bigint<32>(j2_cast_i_fu_169_p1.read()) < sc_bigint<32>(p_dst_matx_cols_read_1_reg_211.read()));
}

void a0_Sobel_Loop_2_proc38::thread_tmp_23_i_fu_159_p2() {
    tmp_23_i_fu_159_p2 = (!tmp_reg_216.read().is_01() || !tmp_11_fu_144_p1.read().is_01())? sc_lv<20>(): sc_bigint<20>(tmp_reg_216.read()) * sc_bigint<20>(tmp_11_fu_144_p1.read());
}

void a0_Sobel_Loop_2_proc38::thread_tmp_24_i_fu_164_p2() {
    tmp_24_i_fu_164_p2 = (!tmp_10_reg_221.read().is_01() || !tmp_11_fu_144_p1.read().is_01())? sc_lv<20>(): sc_bigint<20>(tmp_10_reg_221.read()) * sc_bigint<20>(tmp_11_fu_144_p1.read());
}

void a0_Sobel_Loop_2_proc38::thread_tmp_fu_132_p1() {
    tmp_fu_132_p1 = p_dst_matx_cols_read_dout.read().range(20-1, 0);
}

void a0_Sobel_Loop_2_proc38::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((!(esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0) || esl_seteq<1,1,1>(p_dst_maty_cols_read_empty_n.read(), ap_const_logic_0) || esl_seteq<1,1,1>(p_dst_matx_cols_read_empty_n.read(), ap_const_logic_0) || esl_seteq<1,1,1>(p_dst_matx_rows_read_empty_n.read(), ap_const_logic_0) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(tmp_20_i_fu_148_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            if (!(esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_subdone.read()) && esl_seteq<1,1,1>(tmp_22_i_fu_177_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if ((esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_subdone.read()) && esl_seteq<1,1,1>(tmp_22_i_fu_177_p2.read(), ap_const_lv1_0))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        default : 
            ap_NS_fsm = "XXXX";
            break;
    }
}

}

