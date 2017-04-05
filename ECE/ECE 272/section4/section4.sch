<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="xc9500xl" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="A" />
        <signal name="B" />
        <signal name="C" />
        <signal name="D" />
        <signal name="XLXN_10" />
        <signal name="XLXN_18" />
        <signal name="XLXN_19" />
        <signal name="XLXN_22" />
        <signal name="XLXN_23" />
        <signal name="XLXN_24" />
        <signal name="XLXN_25" />
        <signal name="XLXN_26" />
        <signal name="XLXN_27" />
        <signal name="XLXN_28" />
        <signal name="XLXN_29" />
        <signal name="XLXN_30" />
        <signal name="XLXN_31" />
        <signal name="XLXN_32" />
        <signal name="XLXN_33" />
        <signal name="XLXN_34" />
        <signal name="XLXN_35" />
        <signal name="XLXN_36" />
        <signal name="XLXN_37" />
        <signal name="XLXN_38" />
        <signal name="XLXN_39" />
        <signal name="XLXN_40" />
        <signal name="XLXN_41" />
        <signal name="XLXN_42" />
        <signal name="XLXN_43" />
        <signal name="XLXN_44" />
        <signal name="XLXN_45" />
        <signal name="XLXN_46" />
        <signal name="XLXN_47" />
        <signal name="XLXN_48" />
        <signal name="XLXN_49" />
        <signal name="XLXN_50" />
        <signal name="XLXN_51" />
        <signal name="XLXN_52" />
        <signal name="XLXN_53" />
        <signal name="XLXN_54" />
        <signal name="XLXN_55" />
        <signal name="XLXN_56" />
        <signal name="XLXN_57" />
        <signal name="XLXN_58" />
        <signal name="XLXN_59" />
        <signal name="XLXN_60" />
        <signal name="XLXN_61" />
        <signal name="XLXN_62" />
        <signal name="XLXN_63" />
        <signal name="XLXN_64" />
        <signal name="XLXN_65" />
        <signal name="XLXN_66" />
        <signal name="XLXN_67" />
        <signal name="XLXN_68" />
        <signal name="XLXN_69" />
        <signal name="XLXN_70" />
        <signal name="XLXN_71" />
        <signal name="XLXN_72" />
        <signal name="XLXN_73" />
        <signal name="XLXN_74" />
        <signal name="XLXN_75" />
        <signal name="XLXN_76" />
        <signal name="XLXN_77" />
        <signal name="XLXN_78" />
        <signal name="Seg_G" />
        <signal name="Seg_F" />
        <signal name="Seg_D" />
        <signal name="Seg_E" />
        <signal name="Seg_C" />
        <signal name="Seg_B" />
        <signal name="Seg_A" />
        <port polarity="Input" name="A" />
        <port polarity="Input" name="B" />
        <port polarity="Input" name="C" />
        <port polarity="Input" name="D" />
        <port polarity="Output" name="Seg_G" />
        <port polarity="Output" name="Seg_F" />
        <port polarity="Output" name="Seg_D" />
        <port polarity="Output" name="Seg_E" />
        <port polarity="Output" name="Seg_C" />
        <port polarity="Output" name="Seg_B" />
        <port polarity="Output" name="Seg_A" />
        <blockdef name="and3b3">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="40" y1="-64" y2="-64" x1="0" />
            <circle r="12" cx="52" cy="-64" />
            <line x2="40" y1="-128" y2="-128" x1="0" />
            <circle r="12" cx="52" cy="-128" />
            <line x2="40" y1="-192" y2="-192" x1="0" />
            <circle r="12" cx="52" cy="-192" />
            <line x2="192" y1="-128" y2="-128" x1="256" />
            <line x2="144" y1="-176" y2="-176" x1="64" />
            <line x2="64" y1="-64" y2="-192" x1="64" />
            <arc ex="144" ey="-176" sx="144" sy="-80" r="48" cx="144" cy="-128" />
            <line x2="64" y1="-80" y2="-80" x1="144" />
        </blockdef>
        <blockdef name="and4b2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="40" y1="-64" y2="-64" x1="0" />
            <circle r="12" cx="52" cy="-64" />
            <line x2="40" y1="-128" y2="-128" x1="0" />
            <circle r="12" cx="52" cy="-128" />
            <line x2="64" y1="-192" y2="-192" x1="0" />
            <line x2="64" y1="-256" y2="-256" x1="0" />
            <line x2="192" y1="-160" y2="-160" x1="256" />
            <line x2="144" y1="-208" y2="-208" x1="64" />
            <arc ex="144" ey="-208" sx="144" sy="-112" r="48" cx="144" cy="-160" />
            <line x2="64" y1="-64" y2="-256" x1="64" />
            <line x2="64" y1="-112" y2="-112" x1="144" />
        </blockdef>
        <blockdef name="and3b2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="40" y1="-64" y2="-64" x1="0" />
            <circle r="12" cx="52" cy="-64" />
            <line x2="40" y1="-128" y2="-128" x1="0" />
            <circle r="12" cx="52" cy="-128" />
            <line x2="64" y1="-192" y2="-192" x1="0" />
            <line x2="192" y1="-128" y2="-128" x1="256" />
            <line x2="64" y1="-64" y2="-192" x1="64" />
            <arc ex="144" ey="-176" sx="144" sy="-80" r="48" cx="144" cy="-128" />
            <line x2="64" y1="-80" y2="-80" x1="144" />
            <line x2="144" y1="-176" y2="-176" x1="64" />
        </blockdef>
        <blockdef name="and2b1">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-48" y2="-144" x1="64" />
            <line x2="144" y1="-144" y2="-144" x1="64" />
            <line x2="64" y1="-48" y2="-48" x1="144" />
            <arc ex="144" ey="-144" sx="144" sy="-48" r="48" cx="144" cy="-96" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="40" y1="-64" y2="-64" x1="0" />
            <circle r="12" cx="52" cy="-64" />
        </blockdef>
        <blockdef name="and2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="144" ey="-144" sx="144" sy="-48" r="48" cx="144" cy="-96" />
            <line x2="64" y1="-48" y2="-48" x1="144" />
            <line x2="144" y1="-144" y2="-144" x1="64" />
            <line x2="64" y1="-48" y2="-144" x1="64" />
        </blockdef>
        <blockdef name="and3b1">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="40" y1="-64" y2="-64" x1="0" />
            <circle r="12" cx="52" cy="-64" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="64" y1="-192" y2="-192" x1="0" />
            <line x2="192" y1="-128" y2="-128" x1="256" />
            <line x2="64" y1="-64" y2="-192" x1="64" />
            <arc ex="144" ey="-176" sx="144" sy="-80" r="48" cx="144" cy="-128" />
            <line x2="64" y1="-80" y2="-80" x1="144" />
            <line x2="144" y1="-176" y2="-176" x1="64" />
        </blockdef>
        <blockdef name="and2b2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="40" y1="-64" y2="-64" x1="0" />
            <circle r="12" cx="52" cy="-64" />
            <line x2="40" y1="-128" y2="-128" x1="0" />
            <circle r="12" cx="52" cy="-128" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="144" ey="-144" sx="144" sy="-48" r="48" cx="144" cy="-96" />
            <line x2="64" y1="-48" y2="-144" x1="64" />
            <line x2="64" y1="-48" y2="-48" x1="144" />
            <line x2="144" y1="-144" y2="-144" x1="64" />
        </blockdef>
        <blockdef name="and4b1">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="40" y1="-64" y2="-64" x1="0" />
            <circle r="12" cx="52" cy="-64" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="64" y1="-192" y2="-192" x1="0" />
            <line x2="64" y1="-256" y2="-256" x1="0" />
            <line x2="192" y1="-160" y2="-160" x1="256" />
            <line x2="64" y1="-64" y2="-256" x1="64" />
            <line x2="64" y1="-112" y2="-112" x1="144" />
            <arc ex="144" ey="-208" sx="144" sy="-112" r="48" cx="144" cy="-160" />
            <line x2="144" y1="-208" y2="-208" x1="64" />
        </blockdef>
        <blockdef name="and4b4">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="40" y1="-64" y2="-64" x1="0" />
            <circle r="12" cx="52" cy="-64" />
            <line x2="40" y1="-128" y2="-128" x1="0" />
            <circle r="12" cx="52" cy="-128" />
            <line x2="40" y1="-192" y2="-192" x1="0" />
            <circle r="12" cx="52" cy="-192" />
            <line x2="40" y1="-256" y2="-256" x1="0" />
            <circle r="12" cx="52" cy="-256" />
            <line x2="192" y1="-160" y2="-160" x1="256" />
            <line x2="144" y1="-208" y2="-208" x1="64" />
            <arc ex="144" ey="-208" sx="144" sy="-112" r="48" cx="144" cy="-160" />
            <line x2="64" y1="-64" y2="-256" x1="64" />
            <line x2="64" y1="-112" y2="-112" x1="144" />
        </blockdef>
        <blockdef name="and3">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="64" y1="-192" y2="-192" x1="0" />
            <line x2="192" y1="-128" y2="-128" x1="256" />
            <line x2="144" y1="-176" y2="-176" x1="64" />
            <line x2="64" y1="-80" y2="-80" x1="144" />
            <arc ex="144" ey="-176" sx="144" sy="-80" r="48" cx="144" cy="-128" />
            <line x2="64" y1="-64" y2="-192" x1="64" />
        </blockdef>
        <blockdef name="inv">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-32" y2="-32" x1="0" />
            <line x2="160" y1="-32" y2="-32" x1="224" />
            <line x2="128" y1="-64" y2="-32" x1="64" />
            <line x2="64" y1="-32" y2="0" x1="128" />
            <line x2="64" y1="0" y2="-64" x1="64" />
            <circle r="16" cx="144" cy="-32" />
        </blockdef>
        <blockdef name="or7">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="72" y1="-256" y2="-256" x1="0" />
            <line x2="48" y1="-64" y2="-64" x1="0" />
            <line x2="48" y1="-128" y2="-128" x1="0" />
            <line x2="48" y1="-192" y2="-192" x1="0" />
            <line x2="48" y1="-320" y2="-320" x1="0" />
            <line x2="48" y1="-448" y2="-448" x1="0" />
            <line x2="48" y1="-384" y2="-384" x1="0" />
            <line x2="192" y1="-256" y2="-256" x1="256" />
            <arc ex="112" ey="-304" sx="192" sy="-256" r="88" cx="116" cy="-216" />
            <line x2="48" y1="-208" y2="-208" x1="112" />
            <arc ex="192" ey="-256" sx="112" sy="-208" r="88" cx="116" cy="-296" />
            <line x2="48" y1="-304" y2="-304" x1="112" />
            <line x2="48" y1="-448" y2="-304" x1="48" />
            <line x2="48" y1="-64" y2="-208" x1="48" />
            <arc ex="48" ey="-304" sx="48" sy="-208" r="56" cx="16" cy="-256" />
        </blockdef>
        <blockdef name="or5">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="48" y1="-64" y2="-64" x1="0" />
            <line x2="48" y1="-128" y2="-128" x1="0" />
            <line x2="72" y1="-192" y2="-192" x1="0" />
            <line x2="48" y1="-256" y2="-256" x1="0" />
            <line x2="48" y1="-320" y2="-320" x1="0" />
            <line x2="192" y1="-192" y2="-192" x1="256" />
            <arc ex="192" ey="-192" sx="112" sy="-144" r="88" cx="116" cy="-232" />
            <line x2="48" y1="-240" y2="-240" x1="112" />
            <line x2="48" y1="-144" y2="-144" x1="112" />
            <line x2="48" y1="-64" y2="-144" x1="48" />
            <line x2="48" y1="-320" y2="-240" x1="48" />
            <arc ex="112" ey="-240" sx="192" sy="-192" r="88" cx="116" cy="-152" />
            <arc ex="48" ey="-240" sx="48" sy="-144" r="56" cx="16" cy="-192" />
        </blockdef>
        <blockdef name="or6">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="48" y1="-64" y2="-64" x1="0" />
            <line x2="48" y1="-128" y2="-128" x1="0" />
            <line x2="48" y1="-320" y2="-320" x1="0" />
            <line x2="48" y1="-384" y2="-384" x1="0" />
            <line x2="192" y1="-224" y2="-224" x1="256" />
            <line x2="64" y1="-256" y2="-256" x1="0" />
            <line x2="64" y1="-192" y2="-192" x1="0" />
            <arc ex="112" ey="-272" sx="192" sy="-224" r="88" cx="116" cy="-184" />
            <line x2="48" y1="-176" y2="-176" x1="112" />
            <arc ex="192" ey="-224" sx="112" sy="-176" r="88" cx="116" cy="-264" />
            <arc ex="48" ey="-272" sx="48" sy="-176" r="56" cx="16" cy="-224" />
            <line x2="48" y1="-272" y2="-272" x1="112" />
            <line x2="48" y1="-64" y2="-176" x1="48" />
            <line x2="48" y1="-272" y2="-384" x1="48" />
        </blockdef>
        <blockdef name="obuf">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="0" y2="-64" x1="64" />
            <line x2="64" y1="-32" y2="0" x1="128" />
            <line x2="128" y1="-64" y2="-32" x1="64" />
            <line x2="64" y1="-32" y2="-32" x1="0" />
            <line x2="128" y1="-32" y2="-32" x1="224" />
        </blockdef>
        <block symbolname="and4b2" name="XLXI_2">
            <blockpin signalname="XLXN_27" name="I0" />
            <blockpin signalname="XLXN_29" name="I1" />
            <blockpin signalname="XLXN_24" name="I2" />
            <blockpin signalname="XLXN_25" name="I3" />
            <blockpin signalname="XLXN_31" name="O" />
        </block>
        <block symbolname="and4b2" name="XLXI_3">
            <blockpin signalname="XLXN_24" name="I0" />
            <blockpin signalname="XLXN_27" name="I1" />
            <blockpin signalname="XLXN_25" name="I2" />
            <blockpin signalname="XLXN_29" name="I3" />
            <blockpin signalname="XLXN_32" name="O" />
        </block>
        <block symbolname="and3b2" name="XLXI_4">
            <blockpin signalname="XLXN_27" name="I0" />
            <blockpin signalname="XLXN_25" name="I1" />
            <blockpin signalname="XLXN_29" name="I2" />
            <blockpin signalname="XLXN_33" name="O" />
        </block>
        <block symbolname="and3b2" name="XLXI_5">
            <blockpin signalname="XLXN_24" name="I0" />
            <blockpin signalname="XLXN_25" name="I1" />
            <blockpin signalname="XLXN_29" name="I2" />
            <blockpin signalname="XLXN_34" name="O" />
        </block>
        <block symbolname="and2b1" name="XLXI_6">
            <blockpin signalname="XLXN_29" name="I0" />
            <blockpin signalname="XLXN_27" name="I1" />
            <blockpin signalname="XLXN_35" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_7">
            <blockpin signalname="XLXN_27" name="I0" />
            <blockpin signalname="XLXN_25" name="I1" />
            <blockpin signalname="XLXN_36" name="O" />
        </block>
        <block symbolname="and3b3" name="XLXI_8">
            <blockpin signalname="XLXN_24" name="I0" />
            <blockpin signalname="XLXN_27" name="I1" />
            <blockpin signalname="XLXN_29" name="I2" />
            <blockpin signalname="XLXN_37" name="O" />
        </block>
        <block symbolname="and3b1" name="XLXI_9">
            <blockpin signalname="XLXN_27" name="I0" />
            <blockpin signalname="XLXN_24" name="I1" />
            <blockpin signalname="XLXN_29" name="I2" />
            <blockpin signalname="XLXN_38" name="O" />
        </block>
        <block symbolname="and3b2" name="XLXI_10">
            <blockpin signalname="XLXN_24" name="I0" />
            <blockpin signalname="XLXN_25" name="I1" />
            <blockpin signalname="XLXN_29" name="I2" />
            <blockpin signalname="XLXN_40" name="O" />
        </block>
        <block symbolname="and3b1" name="XLXI_11">
            <blockpin signalname="XLXN_29" name="I0" />
            <blockpin signalname="XLXN_24" name="I1" />
            <blockpin signalname="XLXN_27" name="I2" />
            <blockpin signalname="XLXN_41" name="O" />
        </block>
        <block symbolname="and2b2" name="XLXI_12">
            <blockpin signalname="XLXN_25" name="I0" />
            <blockpin signalname="XLXN_29" name="I1" />
            <blockpin signalname="XLXN_42" name="O" />
        </block>
        <block symbolname="and2b1" name="XLXI_13">
            <blockpin signalname="XLXN_25" name="I0" />
            <blockpin signalname="XLXN_29" name="I1" />
            <blockpin signalname="XLXN_43" name="O" />
        </block>
        <block symbolname="and2b2" name="XLXI_14">
            <blockpin signalname="XLXN_27" name="I0" />
            <blockpin signalname="XLXN_29" name="I1" />
            <blockpin signalname="XLXN_44" name="O" />
        </block>
        <block symbolname="and2b1" name="XLXI_15">
            <blockpin signalname="XLXN_29" name="I0" />
            <blockpin signalname="XLXN_24" name="I1" />
            <blockpin signalname="XLXN_45" name="O" />
        </block>
        <block symbolname="and3b1" name="XLXI_16">
            <blockpin signalname="XLXN_29" name="I0" />
            <blockpin signalname="XLXN_25" name="I1" />
            <blockpin signalname="XLXN_27" name="I2" />
            <blockpin signalname="XLXN_46" name="O" />
        </block>
        <block symbolname="and3b1" name="XLXI_17">
            <blockpin signalname="XLXN_27" name="I0" />
            <blockpin signalname="XLXN_24" name="I1" />
            <blockpin signalname="XLXN_25" name="I2" />
            <blockpin signalname="XLXN_47" name="O" />
        </block>
        <block symbolname="and3b3" name="XLXI_18">
            <blockpin signalname="XLXN_24" name="I0" />
            <blockpin signalname="XLXN_25" name="I1" />
            <blockpin signalname="XLXN_29" name="I2" />
            <blockpin signalname="XLXN_48" name="O" />
        </block>
        <block symbolname="and3b2" name="XLXI_19">
            <blockpin signalname="XLXN_24" name="I0" />
            <blockpin signalname="XLXN_27" name="I1" />
            <blockpin signalname="XLXN_29" name="I2" />
            <blockpin signalname="XLXN_49" name="O" />
        </block>
        <block symbolname="and3b1" name="XLXI_20">
            <blockpin signalname="XLXN_27" name="I0" />
            <blockpin signalname="XLXN_24" name="I1" />
            <blockpin signalname="XLXN_25" name="I2" />
            <blockpin signalname="XLXN_50" name="O" />
        </block>
        <block symbolname="and3b2" name="XLXI_21">
            <blockpin signalname="XLXN_25" name="I0" />
            <blockpin signalname="XLXN_29" name="I1" />
            <blockpin signalname="XLXN_27" name="I2" />
            <blockpin signalname="XLXN_51" name="O" />
        </block>
        <block symbolname="and3b1" name="XLXI_22">
            <blockpin signalname="XLXN_24" name="I0" />
            <blockpin signalname="XLXN_27" name="I1" />
            <blockpin signalname="XLXN_25" name="I2" />
            <blockpin signalname="XLXN_52" name="O" />
        </block>
        <block symbolname="and4b1" name="XLXI_45">
            <blockpin signalname="XLXN_25" name="I0" />
            <blockpin signalname="XLXN_24" name="I1" />
            <blockpin signalname="XLXN_27" name="I2" />
            <blockpin signalname="XLXN_29" name="I3" />
            <blockpin signalname="XLXN_53" name="O" />
        </block>
        <block symbolname="and4b4" name="XLXI_46">
            <blockpin signalname="XLXN_24" name="I0" />
            <blockpin signalname="XLXN_27" name="I1" />
            <blockpin signalname="XLXN_25" name="I2" />
            <blockpin signalname="XLXN_29" name="I3" />
            <blockpin signalname="XLXN_54" name="O" />
        </block>
        <block symbolname="and3b2" name="XLXI_47">
            <blockpin signalname="XLXN_24" name="I0" />
            <blockpin signalname="XLXN_27" name="I1" />
            <blockpin signalname="XLXN_29" name="I2" />
            <blockpin signalname="XLXN_55" name="O" />
        </block>
        <block symbolname="and3" name="XLXI_48">
            <blockpin signalname="XLXN_24" name="I0" />
            <blockpin signalname="XLXN_27" name="I1" />
            <blockpin signalname="XLXN_29" name="I2" />
            <blockpin signalname="XLXN_56" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_49">
            <blockpin signalname="XLXN_25" name="I0" />
            <blockpin signalname="XLXN_29" name="I1" />
            <blockpin signalname="XLXN_57" name="O" />
        </block>
        <block symbolname="and2b1" name="XLXI_50">
            <blockpin signalname="XLXN_24" name="I0" />
            <blockpin signalname="XLXN_27" name="I1" />
            <blockpin signalname="XLXN_58" name="O" />
        </block>
        <block symbolname="and2b2" name="XLXI_51">
            <blockpin signalname="XLXN_24" name="I0" />
            <blockpin signalname="XLXN_27" name="I1" />
            <blockpin signalname="XLXN_59" name="O" />
        </block>
        <block symbolname="and3b1" name="XLXI_52">
            <blockpin signalname="XLXN_29" name="I0" />
            <blockpin signalname="XLXN_27" name="I1" />
            <blockpin signalname="XLXN_25" name="I2" />
            <blockpin signalname="XLXN_60" name="O" />
        </block>
        <block symbolname="and3b1" name="XLXI_53">
            <blockpin signalname="XLXN_24" name="I0" />
            <blockpin signalname="XLXN_27" name="I1" />
            <blockpin signalname="XLXN_25" name="I2" />
            <blockpin signalname="XLXN_61" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_54">
            <blockpin signalname="XLXN_27" name="I0" />
            <blockpin signalname="XLXN_29" name="I1" />
            <blockpin signalname="XLXN_62" name="O" />
        </block>
        <block symbolname="and2b1" name="XLXI_55">
            <blockpin signalname="XLXN_25" name="I0" />
            <blockpin signalname="XLXN_29" name="I1" />
            <blockpin signalname="XLXN_63" name="O" />
        </block>
        <block symbolname="and3b2" name="XLXI_56">
            <blockpin signalname="XLXN_27" name="I0" />
            <blockpin signalname="XLXN_29" name="I1" />
            <blockpin signalname="XLXN_25" name="I2" />
            <blockpin signalname="XLXN_65" name="O" />
        </block>
        <block symbolname="and3b2" name="XLXI_57">
            <blockpin signalname="XLXN_25" name="I0" />
            <blockpin signalname="XLXN_29" name="I1" />
            <blockpin signalname="XLXN_27" name="I2" />
            <blockpin signalname="XLXN_66" name="O" />
        </block>
        <block symbolname="and2b1" name="XLXI_58">
            <blockpin signalname="XLXN_25" name="I0" />
            <blockpin signalname="XLXN_29" name="I1" />
            <blockpin signalname="XLXN_67" name="O" />
        </block>
        <block symbolname="and2b1" name="XLXI_59">
            <blockpin signalname="XLXN_24" name="I0" />
            <blockpin signalname="XLXN_27" name="I1" />
            <blockpin signalname="XLXN_68" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_60">
            <blockpin signalname="XLXN_27" name="I0" />
            <blockpin signalname="XLXN_29" name="I1" />
            <blockpin signalname="XLXN_69" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_61">
            <blockpin signalname="XLXN_24" name="I0" />
            <blockpin signalname="XLXN_29" name="I1" />
            <blockpin signalname="XLXN_70" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_246">
            <blockpin signalname="A" name="I" />
            <blockpin signalname="XLXN_29" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_247">
            <blockpin signalname="B" name="I" />
            <blockpin signalname="XLXN_25" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_248">
            <blockpin signalname="C" name="I" />
            <blockpin signalname="XLXN_27" name="O" />
        </block>
        <block symbolname="inv" name="XLXI_249">
            <blockpin signalname="D" name="I" />
            <blockpin signalname="XLXN_24" name="O" />
        </block>
        <block symbolname="and3b3" name="XLXI_250">
            <blockpin signalname="XLXN_24" name="I0" />
            <blockpin signalname="XLXN_27" name="I1" />
            <blockpin signalname="XLXN_29" name="I2" />
            <blockpin signalname="XLXN_30" name="O" />
        </block>
        <block symbolname="or7" name="XLXI_251">
            <blockpin signalname="XLXN_36" name="I0" />
            <blockpin signalname="XLXN_35" name="I1" />
            <blockpin signalname="XLXN_34" name="I2" />
            <blockpin signalname="XLXN_33" name="I3" />
            <blockpin signalname="XLXN_32" name="I4" />
            <blockpin signalname="XLXN_31" name="I5" />
            <blockpin signalname="XLXN_30" name="I6" />
            <blockpin signalname="XLXN_72" name="O" />
        </block>
        <block symbolname="or5" name="XLXI_252">
            <blockpin signalname="XLXN_42" name="I0" />
            <blockpin signalname="XLXN_41" name="I1" />
            <blockpin signalname="XLXN_40" name="I2" />
            <blockpin signalname="XLXN_38" name="I3" />
            <blockpin signalname="XLXN_37" name="I4" />
            <blockpin signalname="XLXN_73" name="O" />
        </block>
        <block symbolname="or5" name="XLXI_253">
            <blockpin signalname="XLXN_47" name="I0" />
            <blockpin signalname="XLXN_46" name="I1" />
            <blockpin signalname="XLXN_45" name="I2" />
            <blockpin signalname="XLXN_44" name="I3" />
            <blockpin signalname="XLXN_43" name="I4" />
            <blockpin signalname="XLXN_74" name="O" />
        </block>
        <block symbolname="or6" name="XLXI_254">
            <blockpin signalname="XLXN_53" name="I0" />
            <blockpin signalname="XLXN_52" name="I1" />
            <blockpin signalname="XLXN_51" name="I2" />
            <blockpin signalname="XLXN_50" name="I3" />
            <blockpin signalname="XLXN_49" name="I4" />
            <blockpin signalname="XLXN_48" name="I5" />
            <blockpin signalname="XLXN_75" name="O" />
        </block>
        <block symbolname="or5" name="XLXI_255">
            <blockpin signalname="XLXN_58" name="I0" />
            <blockpin signalname="XLXN_57" name="I1" />
            <blockpin signalname="XLXN_56" name="I2" />
            <blockpin signalname="XLXN_55" name="I3" />
            <blockpin signalname="XLXN_54" name="I4" />
            <blockpin signalname="XLXN_76" name="O" />
        </block>
        <block symbolname="or5" name="XLXI_256">
            <blockpin signalname="XLXN_63" name="I0" />
            <blockpin signalname="XLXN_62" name="I1" />
            <blockpin signalname="XLXN_61" name="I2" />
            <blockpin signalname="XLXN_60" name="I3" />
            <blockpin signalname="XLXN_59" name="I4" />
            <blockpin signalname="XLXN_77" name="O" />
        </block>
        <block symbolname="or6" name="XLXI_257">
            <blockpin signalname="XLXN_70" name="I0" />
            <blockpin signalname="XLXN_69" name="I1" />
            <blockpin signalname="XLXN_68" name="I2" />
            <blockpin signalname="XLXN_67" name="I3" />
            <blockpin signalname="XLXN_66" name="I4" />
            <blockpin signalname="XLXN_65" name="I5" />
            <blockpin signalname="XLXN_78" name="O" />
        </block>
        <block symbolname="obuf" name="XLXI_258">
            <blockpin signalname="XLXN_72" name="I" />
            <blockpin signalname="Seg_A" name="O" />
        </block>
        <block symbolname="obuf" name="XLXI_259">
            <blockpin signalname="XLXN_73" name="I" />
            <blockpin signalname="Seg_B" name="O" />
        </block>
        <block symbolname="obuf" name="XLXI_260">
            <blockpin signalname="XLXN_74" name="I" />
            <blockpin signalname="Seg_C" name="O" />
        </block>
        <block symbolname="obuf" name="XLXI_261">
            <blockpin signalname="XLXN_75" name="I" />
            <blockpin signalname="Seg_D" name="O" />
        </block>
        <block symbolname="obuf" name="XLXI_262">
            <blockpin signalname="XLXN_76" name="I" />
            <blockpin signalname="Seg_E" name="O" />
        </block>
        <block symbolname="obuf" name="XLXI_263">
            <blockpin signalname="XLXN_77" name="I" />
            <blockpin signalname="Seg_F" name="O" />
        </block>
        <block symbolname="obuf" name="XLXI_264">
            <blockpin signalname="XLXN_78" name="I" />
            <blockpin signalname="Seg_G" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="5382" height="7609">
        <attr value="CM" name="LengthUnitName" />
        <attr value="4" name="GridsPerUnit" />
        <instance x="2112" y="528" name="XLXI_2" orien="R0" />
        <instance x="2112" y="800" name="XLXI_3" orien="R0" />
        <instance x="2112" y="992" name="XLXI_4" orien="R0" />
        <instance x="2112" y="1184" name="XLXI_5" orien="R0" />
        <instance x="2112" y="1328" name="XLXI_6" orien="R0" />
        <instance x="2112" y="1472" name="XLXI_7" orien="R0" />
        <instance x="2112" y="1760" name="XLXI_8" orien="R0" />
        <instance x="2112" y="1936" name="XLXI_9" orien="R0" />
        <instance x="2112" y="2112" name="XLXI_10" orien="R0" />
        <instance x="2112" y="2288" name="XLXI_11" orien="R0" />
        <instance x="2112" y="2432" name="XLXI_12" orien="R0" />
        <instance x="2112" y="2640" name="XLXI_13" orien="R0" />
        <instance x="2112" y="2784" name="XLXI_14" orien="R0" />
        <instance x="2112" y="2928" name="XLXI_15" orien="R0" />
        <instance x="2112" y="3120" name="XLXI_16" orien="R0" />
        <instance x="2112" y="3296" name="XLXI_17" orien="R0" />
        <instance x="2112" y="3536" name="XLXI_18" orien="R0" />
        <instance x="2112" y="3744" name="XLXI_19" orien="R0" />
        <instance x="2112" y="3952" name="XLXI_20" orien="R0" />
        <instance x="2112" y="4160" name="XLXI_21" orien="R0" />
        <instance x="2112" y="4352" name="XLXI_22" orien="R0" />
        <instance x="2112" y="4592" name="XLXI_45" orien="R0" />
        <instance x="2096" y="4976" name="XLXI_46" orien="R0" />
        <instance x="2096" y="5168" name="XLXI_47" orien="R0" />
        <instance x="2096" y="5344" name="XLXI_48" orien="R0" />
        <instance x="2096" y="5472" name="XLXI_49" orien="R0" />
        <instance x="2096" y="5616" name="XLXI_50" orien="R0" />
        <instance x="2096" y="5808" name="XLXI_51" orien="R0" />
        <instance x="2096" y="5984" name="XLXI_52" orien="R0" />
        <instance x="2096" y="6160" name="XLXI_53" orien="R0" />
        <instance x="2096" y="6288" name="XLXI_54" orien="R0" />
        <instance x="2096" y="6432" name="XLXI_55" orien="R0" />
        <instance x="2112" y="6688" name="XLXI_56" orien="R0" />
        <instance x="2112" y="6864" name="XLXI_57" orien="R0" />
        <instance x="2112" y="7008" name="XLXI_58" orien="R0" />
        <instance x="2112" y="7152" name="XLXI_59" orien="R0" />
        <instance x="2112" y="7312" name="XLXI_60" orien="R0" />
        <instance x="2112" y="7456" name="XLXI_61" orien="R0" />
        <branch name="A">
            <wire x2="256" y1="112" y2="272" x1="256" />
        </branch>
        <iomarker fontsize="28" x="256" y="112" name="A" orien="R270" />
        <iomarker fontsize="28" x="496" y="112" name="B" orien="R270" />
        <branch name="B">
            <wire x2="496" y1="112" y2="272" x1="496" />
        </branch>
        <iomarker fontsize="28" x="752" y="128" name="C" orien="R270" />
        <branch name="C">
            <wire x2="752" y1="128" y2="272" x1="752" />
        </branch>
        <iomarker fontsize="28" x="944" y="128" name="D" orien="R270" />
        <branch name="D">
            <wire x2="944" y1="128" y2="288" x1="944" />
        </branch>
        <instance x="224" y="272" name="XLXI_246" orien="R90" />
        <instance x="464" y="272" name="XLXI_247" orien="R90" />
        <instance x="912" y="288" name="XLXI_249" orien="R90" />
        <instance x="720" y="272" name="XLXI_248" orien="R90" />
        <instance x="2160" y="288" name="XLXI_250" orien="R0" />
        <branch name="XLXN_25">
            <wire x2="496" y1="496" y2="944" x1="496" />
            <wire x2="1280" y1="944" y2="944" x1="496" />
            <wire x2="496" y1="944" y2="1120" x1="496" />
            <wire x2="1296" y1="1120" y2="1120" x1="496" />
            <wire x2="496" y1="1120" y2="1360" x1="496" />
            <wire x2="1264" y1="1360" y2="1360" x1="496" />
            <wire x2="496" y1="1360" y2="1520" x1="496" />
            <wire x2="1280" y1="1520" y2="1520" x1="496" />
            <wire x2="496" y1="1520" y2="1728" x1="496" />
            <wire x2="1296" y1="1728" y2="1728" x1="496" />
            <wire x2="496" y1="1728" y2="2160" x1="496" />
            <wire x2="1296" y1="2160" y2="2160" x1="496" />
            <wire x2="496" y1="2160" y2="2448" x1="496" />
            <wire x2="1296" y1="2448" y2="2448" x1="496" />
            <wire x2="496" y1="2448" y2="2576" x1="496" />
            <wire x2="2112" y1="2576" y2="2576" x1="496" />
            <wire x2="496" y1="2576" y2="2992" x1="496" />
            <wire x2="2112" y1="2992" y2="2992" x1="496" />
            <wire x2="496" y1="2992" y2="3104" x1="496" />
            <wire x2="2112" y1="3104" y2="3104" x1="496" />
            <wire x2="496" y1="3104" y2="3408" x1="496" />
            <wire x2="2112" y1="3408" y2="3408" x1="496" />
            <wire x2="496" y1="3408" y2="3728" x1="496" />
            <wire x2="2112" y1="3728" y2="3728" x1="496" />
            <wire x2="2112" y1="3728" y2="3760" x1="2112" />
            <wire x2="496" y1="3728" y2="4096" x1="496" />
            <wire x2="2112" y1="4096" y2="4096" x1="496" />
            <wire x2="496" y1="4096" y2="4160" x1="496" />
            <wire x2="2112" y1="4160" y2="4160" x1="496" />
            <wire x2="496" y1="4160" y2="4528" x1="496" />
            <wire x2="2112" y1="4528" y2="4528" x1="496" />
            <wire x2="496" y1="4528" y2="4816" x1="496" />
            <wire x2="1296" y1="4816" y2="4816" x1="496" />
            <wire x2="496" y1="4816" y2="5408" x1="496" />
            <wire x2="2096" y1="5408" y2="5408" x1="496" />
            <wire x2="496" y1="5408" y2="5792" x1="496" />
            <wire x2="2096" y1="5792" y2="5792" x1="496" />
            <wire x2="496" y1="5792" y2="5968" x1="496" />
            <wire x2="2096" y1="5968" y2="5968" x1="496" />
            <wire x2="496" y1="5968" y2="6368" x1="496" />
            <wire x2="2096" y1="6368" y2="6368" x1="496" />
            <wire x2="496" y1="6368" y2="6512" x1="496" />
            <wire x2="1296" y1="6512" y2="6512" x1="496" />
            <wire x2="496" y1="6512" y2="6800" x1="496" />
            <wire x2="496" y1="6800" y2="6944" x1="496" />
            <wire x2="2112" y1="6944" y2="6944" x1="496" />
            <wire x2="2112" y1="6800" y2="6800" x1="496" />
            <wire x2="1264" y1="864" y2="1360" x1="1264" />
            <wire x2="2112" y1="864" y2="864" x1="1264" />
            <wire x2="2112" y1="272" y2="272" x1="1280" />
            <wire x2="1280" y1="272" y2="944" x1="1280" />
            <wire x2="1280" y1="1056" y2="1520" x1="1280" />
            <wire x2="2112" y1="1056" y2="1056" x1="1280" />
            <wire x2="1296" y1="608" y2="1120" x1="1296" />
            <wire x2="2112" y1="608" y2="608" x1="1296" />
            <wire x2="1296" y1="1344" y2="1728" x1="1296" />
            <wire x2="2112" y1="1344" y2="1344" x1="1296" />
            <wire x2="1296" y1="1984" y2="2160" x1="1296" />
            <wire x2="2112" y1="1984" y2="1984" x1="1296" />
            <wire x2="1296" y1="2368" y2="2448" x1="1296" />
            <wire x2="2112" y1="2368" y2="2368" x1="1296" />
            <wire x2="1296" y1="4784" y2="4816" x1="1296" />
            <wire x2="2096" y1="4784" y2="4784" x1="1296" />
            <wire x2="1296" y1="6496" y2="6512" x1="1296" />
            <wire x2="2112" y1="6496" y2="6496" x1="1296" />
        </branch>
        <branch name="XLXN_27">
            <wire x2="752" y1="496" y2="656" x1="752" />
            <wire x2="1424" y1="656" y2="656" x1="752" />
            <wire x2="752" y1="656" y2="880" x1="752" />
            <wire x2="1408" y1="880" y2="880" x1="752" />
            <wire x2="752" y1="880" y2="1248" x1="752" />
            <wire x2="1424" y1="1248" y2="1248" x1="752" />
            <wire x2="752" y1="1248" y2="1424" x1="752" />
            <wire x2="1408" y1="1424" y2="1424" x1="752" />
            <wire x2="752" y1="1424" y2="1680" x1="752" />
            <wire x2="1392" y1="1680" y2="1680" x1="752" />
            <wire x2="752" y1="1680" y2="1776" x1="752" />
            <wire x2="1424" y1="1776" y2="1776" x1="752" />
            <wire x2="752" y1="1776" y2="1888" x1="752" />
            <wire x2="1408" y1="1888" y2="1888" x1="752" />
            <wire x2="752" y1="1888" y2="2032" x1="752" />
            <wire x2="1424" y1="2032" y2="2032" x1="752" />
            <wire x2="752" y1="2032" y2="2304" x1="752" />
            <wire x2="1424" y1="2304" y2="2304" x1="752" />
            <wire x2="752" y1="2304" y2="2720" x1="752" />
            <wire x2="2112" y1="2720" y2="2720" x1="752" />
            <wire x2="752" y1="2720" y2="2928" x1="752" />
            <wire x2="2112" y1="2928" y2="2928" x1="752" />
            <wire x2="752" y1="2928" y2="3232" x1="752" />
            <wire x2="2112" y1="3232" y2="3232" x1="752" />
            <wire x2="752" y1="3232" y2="3616" x1="752" />
            <wire x2="2112" y1="3616" y2="3616" x1="752" />
            <wire x2="752" y1="3616" y2="3872" x1="752" />
            <wire x2="1424" y1="3872" y2="3872" x1="752" />
            <wire x2="1424" y1="3872" y2="3904" x1="1424" />
            <wire x2="2112" y1="3904" y2="3904" x1="1424" />
            <wire x2="752" y1="3872" y2="3936" x1="752" />
            <wire x2="2112" y1="3936" y2="3936" x1="752" />
            <wire x2="2112" y1="3936" y2="3968" x1="2112" />
            <wire x2="752" y1="3936" y2="4224" x1="752" />
            <wire x2="2112" y1="4224" y2="4224" x1="752" />
            <wire x2="752" y1="4224" y2="4400" x1="752" />
            <wire x2="2112" y1="4400" y2="4400" x1="752" />
            <wire x2="752" y1="4400" y2="4848" x1="752" />
            <wire x2="2096" y1="4848" y2="4848" x1="752" />
            <wire x2="752" y1="4848" y2="5040" x1="752" />
            <wire x2="2096" y1="5040" y2="5040" x1="752" />
            <wire x2="752" y1="5040" y2="5216" x1="752" />
            <wire x2="2096" y1="5216" y2="5216" x1="752" />
            <wire x2="752" y1="5216" y2="5488" x1="752" />
            <wire x2="2096" y1="5488" y2="5488" x1="752" />
            <wire x2="752" y1="5488" y2="5680" x1="752" />
            <wire x2="2096" y1="5680" y2="5680" x1="752" />
            <wire x2="752" y1="5680" y2="5856" x1="752" />
            <wire x2="2096" y1="5856" y2="5856" x1="752" />
            <wire x2="752" y1="5856" y2="6032" x1="752" />
            <wire x2="2096" y1="6032" y2="6032" x1="752" />
            <wire x2="752" y1="6032" y2="6224" x1="752" />
            <wire x2="2096" y1="6224" y2="6224" x1="752" />
            <wire x2="752" y1="6224" y2="6624" x1="752" />
            <wire x2="2112" y1="6624" y2="6624" x1="752" />
            <wire x2="752" y1="6624" y2="6672" x1="752" />
            <wire x2="2112" y1="6672" y2="6672" x1="752" />
            <wire x2="752" y1="6672" y2="7024" x1="752" />
            <wire x2="752" y1="7024" y2="7248" x1="752" />
            <wire x2="2112" y1="7248" y2="7248" x1="752" />
            <wire x2="2112" y1="7024" y2="7024" x1="752" />
            <wire x2="1392" y1="1200" y2="1680" x1="1392" />
            <wire x2="2112" y1="1200" y2="1200" x1="1392" />
            <wire x2="2112" y1="464" y2="464" x1="1408" />
            <wire x2="1408" y1="464" y2="880" x1="1408" />
            <wire x2="1408" y1="928" y2="1424" x1="1408" />
            <wire x2="2112" y1="928" y2="928" x1="1408" />
            <wire x2="1408" y1="1632" y2="1888" x1="1408" />
            <wire x2="2112" y1="1632" y2="1632" x1="1408" />
            <wire x2="2112" y1="144" y2="144" x1="1424" />
            <wire x2="2112" y1="144" y2="160" x1="2112" />
            <wire x2="2160" y1="160" y2="160" x1="2112" />
            <wire x2="1424" y1="144" y2="656" x1="1424" />
            <wire x2="1424" y1="672" y2="1248" x1="1424" />
            <wire x2="2112" y1="672" y2="672" x1="1424" />
            <wire x2="1424" y1="1408" y2="1776" x1="1424" />
            <wire x2="2112" y1="1408" y2="1408" x1="1424" />
            <wire x2="1424" y1="1872" y2="2032" x1="1424" />
            <wire x2="2112" y1="1872" y2="1872" x1="1424" />
            <wire x2="1424" y1="2096" y2="2304" x1="1424" />
            <wire x2="2112" y1="2096" y2="2096" x1="1424" />
            <wire x2="2112" y1="3888" y2="3904" x1="2112" />
        </branch>
        <branch name="XLXN_29">
            <wire x2="256" y1="496" y2="640" x1="256" />
            <wire x2="1056" y1="640" y2="640" x1="256" />
            <wire x2="256" y1="640" y2="816" x1="256" />
            <wire x2="1184" y1="816" y2="816" x1="256" />
            <wire x2="256" y1="816" y2="1056" x1="256" />
            <wire x2="1168" y1="1056" y2="1056" x1="256" />
            <wire x2="256" y1="1056" y2="1328" x1="256" />
            <wire x2="1152" y1="1328" y2="1328" x1="256" />
            <wire x2="256" y1="1328" y2="1472" x1="256" />
            <wire x2="1184" y1="1472" y2="1472" x1="256" />
            <wire x2="256" y1="1472" y2="1616" x1="256" />
            <wire x2="1168" y1="1616" y2="1616" x1="256" />
            <wire x2="256" y1="1616" y2="1824" x1="256" />
            <wire x2="1600" y1="1824" y2="1824" x1="256" />
            <wire x2="256" y1="1824" y2="1968" x1="256" />
            <wire x2="1184" y1="1968" y2="1968" x1="256" />
            <wire x2="256" y1="1968" y2="2112" x1="256" />
            <wire x2="1168" y1="2112" y2="2112" x1="256" />
            <wire x2="256" y1="2112" y2="2272" x1="256" />
            <wire x2="1616" y1="2272" y2="2272" x1="256" />
            <wire x2="256" y1="2272" y2="2400" x1="256" />
            <wire x2="1504" y1="2400" y2="2400" x1="256" />
            <wire x2="256" y1="2400" y2="2512" x1="256" />
            <wire x2="2112" y1="2512" y2="2512" x1="256" />
            <wire x2="256" y1="2512" y2="2656" x1="256" />
            <wire x2="2112" y1="2656" y2="2656" x1="256" />
            <wire x2="256" y1="2656" y2="2864" x1="256" />
            <wire x2="2112" y1="2864" y2="2864" x1="256" />
            <wire x2="256" y1="2864" y2="3024" x1="256" />
            <wire x2="1184" y1="3024" y2="3024" x1="256" />
            <wire x2="1184" y1="3024" y2="3056" x1="1184" />
            <wire x2="2112" y1="3056" y2="3056" x1="1184" />
            <wire x2="256" y1="3024" y2="3344" x1="256" />
            <wire x2="2112" y1="3344" y2="3344" x1="256" />
            <wire x2="256" y1="3344" y2="3552" x1="256" />
            <wire x2="2112" y1="3552" y2="3552" x1="256" />
            <wire x2="256" y1="3552" y2="4000" x1="256" />
            <wire x2="1184" y1="4000" y2="4000" x1="256" />
            <wire x2="1184" y1="4000" y2="4032" x1="1184" />
            <wire x2="2112" y1="4032" y2="4032" x1="1184" />
            <wire x2="256" y1="4000" y2="4320" x1="256" />
            <wire x2="2112" y1="4320" y2="4320" x1="256" />
            <wire x2="2112" y1="4320" y2="4336" x1="2112" />
            <wire x2="256" y1="4320" y2="4720" x1="256" />
            <wire x2="2096" y1="4720" y2="4720" x1="256" />
            <wire x2="256" y1="4720" y2="4960" x1="256" />
            <wire x2="2096" y1="4960" y2="4960" x1="256" />
            <wire x2="2096" y1="4960" y2="4976" x1="2096" />
            <wire x2="256" y1="4960" y2="5152" x1="256" />
            <wire x2="2096" y1="5152" y2="5152" x1="256" />
            <wire x2="256" y1="5152" y2="5344" x1="256" />
            <wire x2="2096" y1="5344" y2="5344" x1="256" />
            <wire x2="256" y1="5344" y2="5888" x1="256" />
            <wire x2="1168" y1="5888" y2="5888" x1="256" />
            <wire x2="1168" y1="5888" y2="5920" x1="1168" />
            <wire x2="2096" y1="5920" y2="5920" x1="1168" />
            <wire x2="256" y1="5888" y2="6160" x1="256" />
            <wire x2="2096" y1="6160" y2="6160" x1="256" />
            <wire x2="256" y1="6160" y2="6304" x1="256" />
            <wire x2="2096" y1="6304" y2="6304" x1="256" />
            <wire x2="256" y1="6304" y2="6576" x1="256" />
            <wire x2="2112" y1="6576" y2="6576" x1="256" />
            <wire x2="256" y1="6576" y2="6736" x1="256" />
            <wire x2="2112" y1="6736" y2="6736" x1="256" />
            <wire x2="256" y1="6736" y2="6880" x1="256" />
            <wire x2="2112" y1="6880" y2="6880" x1="256" />
            <wire x2="256" y1="6880" y2="7152" x1="256" />
            <wire x2="256" y1="7152" y2="7328" x1="256" />
            <wire x2="2112" y1="7328" y2="7328" x1="256" />
            <wire x2="1184" y1="7152" y2="7152" x1="256" />
            <wire x2="1184" y1="7152" y2="7184" x1="1184" />
            <wire x2="2112" y1="7184" y2="7184" x1="1184" />
            <wire x2="2160" y1="96" y2="96" x1="1056" />
            <wire x2="1056" y1="96" y2="640" x1="1056" />
            <wire x2="1152" y1="800" y2="1328" x1="1152" />
            <wire x2="2112" y1="800" y2="800" x1="1152" />
            <wire x2="1168" y1="544" y2="1056" x1="1168" />
            <wire x2="2112" y1="544" y2="544" x1="1168" />
            <wire x2="1168" y1="1264" y2="1616" x1="1168" />
            <wire x2="2112" y1="1264" y2="1264" x1="1168" />
            <wire x2="1168" y1="1920" y2="2112" x1="1168" />
            <wire x2="2112" y1="1920" y2="1920" x1="1168" />
            <wire x2="2112" y1="400" y2="400" x1="1184" />
            <wire x2="1184" y1="400" y2="816" x1="1184" />
            <wire x2="1184" y1="992" y2="1472" x1="1184" />
            <wire x2="2112" y1="992" y2="992" x1="1184" />
            <wire x2="1184" y1="1744" y2="1968" x1="1184" />
            <wire x2="2112" y1="1744" y2="1744" x1="1184" />
            <wire x2="1504" y1="2304" y2="2400" x1="1504" />
            <wire x2="2112" y1="2304" y2="2304" x1="1504" />
            <wire x2="1600" y1="1568" y2="1824" x1="1600" />
            <wire x2="2112" y1="1568" y2="1568" x1="1600" />
            <wire x2="1616" y1="2224" y2="2272" x1="1616" />
            <wire x2="2112" y1="2224" y2="2224" x1="1616" />
            <wire x2="2112" y1="6560" y2="6576" x1="2112" />
        </branch>
        <branch name="XLXN_24">
            <wire x2="944" y1="512" y2="752" x1="944" />
            <wire x2="1520" y1="752" y2="752" x1="944" />
            <wire x2="944" y1="752" y2="1024" x1="944" />
            <wire x2="1504" y1="1024" y2="1024" x1="944" />
            <wire x2="944" y1="1024" y2="1296" x1="944" />
            <wire x2="1536" y1="1296" y2="1296" x1="944" />
            <wire x2="944" y1="1296" y2="1568" x1="944" />
            <wire x2="1552" y1="1568" y2="1568" x1="944" />
            <wire x2="944" y1="1568" y2="1936" x1="944" />
            <wire x2="1616" y1="1936" y2="1936" x1="944" />
            <wire x2="944" y1="1936" y2="2080" x1="944" />
            <wire x2="1520" y1="2080" y2="2080" x1="944" />
            <wire x2="944" y1="2080" y2="2224" x1="944" />
            <wire x2="1536" y1="2224" y2="2224" x1="944" />
            <wire x2="944" y1="2224" y2="2352" x1="944" />
            <wire x2="1520" y1="2352" y2="2352" x1="944" />
            <wire x2="944" y1="2352" y2="2800" x1="944" />
            <wire x2="2112" y1="2800" y2="2800" x1="944" />
            <wire x2="944" y1="2800" y2="3168" x1="944" />
            <wire x2="2112" y1="3168" y2="3168" x1="944" />
            <wire x2="944" y1="3168" y2="3472" x1="944" />
            <wire x2="2112" y1="3472" y2="3472" x1="944" />
            <wire x2="944" y1="3472" y2="3680" x1="944" />
            <wire x2="2112" y1="3680" y2="3680" x1="944" />
            <wire x2="944" y1="3680" y2="3792" x1="944" />
            <wire x2="1520" y1="3792" y2="3792" x1="944" />
            <wire x2="1520" y1="3792" y2="3824" x1="1520" />
            <wire x2="2112" y1="3824" y2="3824" x1="1520" />
            <wire x2="944" y1="3792" y2="4288" x1="944" />
            <wire x2="2112" y1="4288" y2="4288" x1="944" />
            <wire x2="944" y1="4288" y2="4464" x1="944" />
            <wire x2="2112" y1="4464" y2="4464" x1="944" />
            <wire x2="944" y1="4464" y2="4912" x1="944" />
            <wire x2="2096" y1="4912" y2="4912" x1="944" />
            <wire x2="944" y1="4912" y2="5104" x1="944" />
            <wire x2="2096" y1="5104" y2="5104" x1="944" />
            <wire x2="944" y1="5104" y2="5280" x1="944" />
            <wire x2="2096" y1="5280" y2="5280" x1="944" />
            <wire x2="944" y1="5280" y2="5552" x1="944" />
            <wire x2="2096" y1="5552" y2="5552" x1="944" />
            <wire x2="944" y1="5552" y2="5744" x1="944" />
            <wire x2="2096" y1="5744" y2="5744" x1="944" />
            <wire x2="944" y1="5744" y2="6096" x1="944" />
            <wire x2="2096" y1="6096" y2="6096" x1="944" />
            <wire x2="944" y1="6096" y2="7088" x1="944" />
            <wire x2="2112" y1="7088" y2="7088" x1="944" />
            <wire x2="944" y1="7088" y2="7392" x1="944" />
            <wire x2="2112" y1="7392" y2="7392" x1="944" />
            <wire x2="2112" y1="336" y2="336" x1="1504" />
            <wire x2="1504" y1="336" y2="1024" x1="1504" />
            <wire x2="2112" y1="208" y2="208" x1="1520" />
            <wire x2="2112" y1="208" y2="224" x1="2112" />
            <wire x2="2160" y1="224" y2="224" x1="2112" />
            <wire x2="1520" y1="208" y2="752" x1="1520" />
            <wire x2="2112" y1="1808" y2="1808" x1="1520" />
            <wire x2="1520" y1="1808" y2="2080" x1="1520" />
            <wire x2="2112" y1="2160" y2="2160" x1="1520" />
            <wire x2="1520" y1="2160" y2="2352" x1="1520" />
            <wire x2="2112" y1="736" y2="736" x1="1536" />
            <wire x2="1536" y1="736" y2="1296" x1="1536" />
            <wire x2="2112" y1="2048" y2="2048" x1="1536" />
            <wire x2="1536" y1="2048" y2="2224" x1="1536" />
            <wire x2="2112" y1="1120" y2="1120" x1="1552" />
            <wire x2="1552" y1="1120" y2="1568" x1="1552" />
            <wire x2="2112" y1="1696" y2="1696" x1="1616" />
            <wire x2="1616" y1="1696" y2="1936" x1="1616" />
        </branch>
        <instance x="3280" y="992" name="XLXI_251" orien="R0" />
        <instance x="3360" y="2128" name="XLXI_252" orien="R0" />
        <instance x="3424" y="3056" name="XLXI_253" orien="R0" />
        <instance x="3424" y="4080" name="XLXI_254" orien="R0" />
        <instance x="3408" y="5264" name="XLXI_255" orien="R0" />
        <instance x="3376" y="6112" name="XLXI_256" orien="R0" />
        <instance x="3392" y="7216" name="XLXI_257" orien="R0" />
        <branch name="XLXN_30">
            <wire x2="3280" y1="160" y2="160" x1="2416" />
            <wire x2="3280" y1="160" y2="544" x1="3280" />
        </branch>
        <branch name="XLXN_31">
            <wire x2="2816" y1="368" y2="368" x1="2368" />
            <wire x2="2816" y1="368" y2="608" x1="2816" />
            <wire x2="3280" y1="608" y2="608" x1="2816" />
        </branch>
        <branch name="XLXN_32">
            <wire x2="2816" y1="640" y2="640" x1="2368" />
            <wire x2="2816" y1="640" y2="672" x1="2816" />
            <wire x2="3280" y1="672" y2="672" x1="2816" />
        </branch>
        <branch name="XLXN_33">
            <wire x2="2816" y1="864" y2="864" x1="2368" />
            <wire x2="2816" y1="736" y2="864" x1="2816" />
            <wire x2="3280" y1="736" y2="736" x1="2816" />
        </branch>
        <branch name="XLXN_34">
            <wire x2="2832" y1="1056" y2="1056" x1="2368" />
            <wire x2="2832" y1="800" y2="1056" x1="2832" />
            <wire x2="3280" y1="800" y2="800" x1="2832" />
        </branch>
        <branch name="XLXN_35">
            <wire x2="2848" y1="1232" y2="1232" x1="2368" />
            <wire x2="2848" y1="864" y2="1232" x1="2848" />
            <wire x2="3280" y1="864" y2="864" x1="2848" />
        </branch>
        <branch name="XLXN_36">
            <wire x2="3280" y1="1376" y2="1376" x1="2368" />
            <wire x2="3280" y1="928" y2="1376" x1="3280" />
        </branch>
        <branch name="XLXN_37">
            <wire x2="3360" y1="1632" y2="1632" x1="2368" />
            <wire x2="3360" y1="1632" y2="1808" x1="3360" />
        </branch>
        <branch name="XLXN_38">
            <wire x2="2864" y1="1808" y2="1808" x1="2368" />
            <wire x2="2864" y1="1808" y2="1856" x1="2864" />
            <wire x2="2864" y1="1856" y2="1872" x1="2864" />
            <wire x2="3360" y1="1872" y2="1872" x1="2864" />
        </branch>
        <branch name="XLXN_40">
            <wire x2="2864" y1="1984" y2="1984" x1="2368" />
            <wire x2="2864" y1="1936" y2="1984" x1="2864" />
            <wire x2="3360" y1="1936" y2="1936" x1="2864" />
        </branch>
        <branch name="XLXN_41">
            <wire x2="2864" y1="2160" y2="2160" x1="2368" />
            <wire x2="2864" y1="2000" y2="2160" x1="2864" />
            <wire x2="3360" y1="2000" y2="2000" x1="2864" />
        </branch>
        <branch name="XLXN_42">
            <wire x2="3360" y1="2336" y2="2336" x1="2368" />
            <wire x2="3360" y1="2064" y2="2336" x1="3360" />
        </branch>
        <branch name="XLXN_43">
            <wire x2="3424" y1="2544" y2="2544" x1="2368" />
            <wire x2="3424" y1="2544" y2="2736" x1="3424" />
        </branch>
        <branch name="XLXN_44">
            <wire x2="2896" y1="2688" y2="2688" x1="2368" />
            <wire x2="2896" y1="2688" y2="2800" x1="2896" />
            <wire x2="3424" y1="2800" y2="2800" x1="2896" />
        </branch>
        <branch name="XLXN_45">
            <wire x2="2896" y1="2832" y2="2832" x1="2368" />
            <wire x2="2896" y1="2832" y2="2864" x1="2896" />
            <wire x2="3424" y1="2864" y2="2864" x1="2896" />
        </branch>
        <branch name="XLXN_46">
            <wire x2="2896" y1="2992" y2="2992" x1="2368" />
            <wire x2="2896" y1="2928" y2="2992" x1="2896" />
            <wire x2="3424" y1="2928" y2="2928" x1="2896" />
        </branch>
        <branch name="XLXN_47">
            <wire x2="3424" y1="3168" y2="3168" x1="2368" />
            <wire x2="3424" y1="2992" y2="3168" x1="3424" />
        </branch>
        <branch name="XLXN_48">
            <wire x2="3424" y1="3408" y2="3408" x1="2368" />
            <wire x2="3424" y1="3408" y2="3696" x1="3424" />
        </branch>
        <branch name="XLXN_49">
            <wire x2="2896" y1="3616" y2="3616" x1="2368" />
            <wire x2="2896" y1="3616" y2="3760" x1="2896" />
            <wire x2="3424" y1="3760" y2="3760" x1="2896" />
        </branch>
        <branch name="XLXN_50">
            <wire x2="3424" y1="3824" y2="3824" x1="2368" />
        </branch>
        <branch name="XLXN_51">
            <wire x2="2896" y1="4032" y2="4032" x1="2368" />
            <wire x2="2896" y1="3888" y2="4032" x1="2896" />
            <wire x2="3424" y1="3888" y2="3888" x1="2896" />
        </branch>
        <branch name="XLXN_52">
            <wire x2="2912" y1="4224" y2="4224" x1="2368" />
            <wire x2="2912" y1="3952" y2="4224" x1="2912" />
            <wire x2="3424" y1="3952" y2="3952" x1="2912" />
        </branch>
        <branch name="XLXN_53">
            <wire x2="3424" y1="4432" y2="4432" x1="2368" />
            <wire x2="3424" y1="4016" y2="4432" x1="3424" />
        </branch>
        <branch name="XLXN_54">
            <wire x2="3408" y1="4816" y2="4816" x1="2352" />
            <wire x2="3408" y1="4816" y2="4944" x1="3408" />
        </branch>
        <branch name="XLXN_55">
            <wire x2="2880" y1="5040" y2="5040" x1="2352" />
            <wire x2="2880" y1="5008" y2="5040" x1="2880" />
            <wire x2="3408" y1="5008" y2="5008" x1="2880" />
        </branch>
        <branch name="XLXN_56">
            <wire x2="2880" y1="5216" y2="5216" x1="2352" />
            <wire x2="2880" y1="5072" y2="5216" x1="2880" />
            <wire x2="3408" y1="5072" y2="5072" x1="2880" />
        </branch>
        <branch name="XLXN_57">
            <wire x2="2896" y1="5376" y2="5376" x1="2352" />
            <wire x2="2896" y1="5136" y2="5376" x1="2896" />
            <wire x2="3408" y1="5136" y2="5136" x1="2896" />
        </branch>
        <branch name="XLXN_58">
            <wire x2="3408" y1="5520" y2="5520" x1="2352" />
            <wire x2="3408" y1="5200" y2="5520" x1="3408" />
        </branch>
        <branch name="XLXN_59">
            <wire x2="3376" y1="5712" y2="5712" x1="2352" />
            <wire x2="3376" y1="5712" y2="5792" x1="3376" />
        </branch>
        <branch name="XLXN_60">
            <wire x2="3376" y1="5856" y2="5856" x1="2352" />
        </branch>
        <branch name="XLXN_61">
            <wire x2="2864" y1="6032" y2="6032" x1="2352" />
            <wire x2="2864" y1="5920" y2="6032" x1="2864" />
            <wire x2="3376" y1="5920" y2="5920" x1="2864" />
        </branch>
        <branch name="XLXN_62">
            <wire x2="2880" y1="6192" y2="6192" x1="2352" />
            <wire x2="2880" y1="5984" y2="6192" x1="2880" />
            <wire x2="3376" y1="5984" y2="5984" x1="2880" />
        </branch>
        <branch name="XLXN_63">
            <wire x2="2368" y1="6336" y2="6336" x1="2352" />
            <wire x2="3376" y1="6336" y2="6336" x1="2368" />
            <wire x2="3376" y1="6048" y2="6336" x1="3376" />
        </branch>
        <branch name="XLXN_65">
            <wire x2="3392" y1="6560" y2="6560" x1="2368" />
            <wire x2="3392" y1="6560" y2="6832" x1="3392" />
        </branch>
        <branch name="XLXN_66">
            <wire x2="2880" y1="6736" y2="6736" x1="2368" />
            <wire x2="2880" y1="6736" y2="6896" x1="2880" />
            <wire x2="3392" y1="6896" y2="6896" x1="2880" />
        </branch>
        <branch name="XLXN_67">
            <wire x2="2880" y1="6912" y2="6912" x1="2368" />
            <wire x2="2880" y1="6912" y2="6960" x1="2880" />
            <wire x2="3392" y1="6960" y2="6960" x1="2880" />
        </branch>
        <branch name="XLXN_68">
            <wire x2="2880" y1="7056" y2="7056" x1="2368" />
            <wire x2="2880" y1="7024" y2="7056" x1="2880" />
            <wire x2="3392" y1="7024" y2="7024" x1="2880" />
        </branch>
        <branch name="XLXN_69">
            <wire x2="2880" y1="7216" y2="7216" x1="2368" />
            <wire x2="2880" y1="7088" y2="7216" x1="2880" />
            <wire x2="3392" y1="7088" y2="7088" x1="2880" />
        </branch>
        <branch name="XLXN_70">
            <wire x2="2384" y1="7360" y2="7360" x1="2368" />
            <wire x2="3392" y1="7360" y2="7360" x1="2384" />
            <wire x2="3392" y1="7152" y2="7360" x1="3392" />
        </branch>
        <instance x="4032" y="768" name="XLXI_258" orien="R0" />
        <instance x="4032" y="1952" name="XLXI_259" orien="R0" />
        <instance x="4048" y="2896" name="XLXI_260" orien="R0" />
        <instance x="4080" y="3888" name="XLXI_261" orien="R0" />
        <instance x="4080" y="5120" name="XLXI_262" orien="R0" />
        <instance x="4080" y="5936" name="XLXI_263" orien="R0" />
        <instance x="4144" y="7040" name="XLXI_264" orien="R0" />
        <branch name="XLXN_72">
            <wire x2="4032" y1="736" y2="736" x1="3536" />
        </branch>
        <branch name="XLXN_73">
            <wire x2="3824" y1="1936" y2="1936" x1="3616" />
            <wire x2="3824" y1="1920" y2="1936" x1="3824" />
            <wire x2="4032" y1="1920" y2="1920" x1="3824" />
        </branch>
        <branch name="XLXN_74">
            <wire x2="4048" y1="2864" y2="2864" x1="3680" />
        </branch>
        <branch name="XLXN_75">
            <wire x2="4080" y1="3856" y2="3856" x1="3680" />
        </branch>
        <branch name="XLXN_76">
            <wire x2="3872" y1="5072" y2="5072" x1="3664" />
            <wire x2="3872" y1="5072" y2="5088" x1="3872" />
            <wire x2="4080" y1="5088" y2="5088" x1="3872" />
        </branch>
        <branch name="XLXN_77">
            <wire x2="3856" y1="5920" y2="5920" x1="3632" />
            <wire x2="3856" y1="5904" y2="5920" x1="3856" />
            <wire x2="4080" y1="5904" y2="5904" x1="3856" />
        </branch>
        <branch name="XLXN_78">
            <wire x2="3888" y1="6992" y2="6992" x1="3648" />
            <wire x2="3888" y1="6992" y2="7008" x1="3888" />
            <wire x2="4144" y1="7008" y2="7008" x1="3888" />
        </branch>
        <branch name="Seg_G">
            <wire x2="4576" y1="7008" y2="7008" x1="4368" />
        </branch>
        <iomarker fontsize="28" x="4576" y="7008" name="Seg_G" orien="R0" />
        <branch name="Seg_F">
            <wire x2="4576" y1="5904" y2="5904" x1="4304" />
        </branch>
        <iomarker fontsize="28" x="4576" y="5904" name="Seg_F" orien="R0" />
        <branch name="Seg_D">
            <wire x2="4336" y1="3856" y2="3856" x1="4304" />
        </branch>
        <iomarker fontsize="28" x="4336" y="3856" name="Seg_D" orien="R0" />
        <branch name="Seg_E">
            <wire x2="4336" y1="5088" y2="5088" x1="4304" />
        </branch>
        <iomarker fontsize="28" x="4336" y="5088" name="Seg_E" orien="R0" />
        <branch name="Seg_C">
            <wire x2="4304" y1="2864" y2="2864" x1="4272" />
        </branch>
        <iomarker fontsize="28" x="4304" y="2864" name="Seg_C" orien="R0" />
        <branch name="Seg_B">
            <wire x2="4288" y1="1920" y2="1920" x1="4256" />
        </branch>
        <iomarker fontsize="28" x="4288" y="1920" name="Seg_B" orien="R0" />
        <branch name="Seg_A">
            <wire x2="4288" y1="736" y2="736" x1="4256" />
        </branch>
        <iomarker fontsize="28" x="4288" y="736" name="Seg_A" orien="R0" />
    </sheet>
</drawing>