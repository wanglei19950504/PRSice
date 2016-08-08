#ifndef COMMANDER_H
#define COMMANDER_H

#include <string>

class Commander
{
    public:
        Commander();
        Commander(const int argc, const char *argv[]);
        virtual ~Commander();
        std::string get_target() const{ return m_target; };
    protected:
    private:
        std::vector<std::string> m_target;
        std::vector<std::string> m_base;
        std::string m_chr = "CHR";
        std::string m_ref_allele="A1;
        std::string m_alt_allele="A2";
        std::string m_statistic = "OR";
        std::string m_snp="SNP";
        std::string m_bp="BP";
        std::string m_standard_error = "SE";
        std::string m_p_value = "P";
        int m_i_chr=-1;
        int m_i_ref_allele=-1;
        int m_i_alt_allele=-1;
        int m_i_statistic=-1;
        int m_i_snp=-1;
        int m_i_bp=-1;
        int m_i_standard_error=-1;
        int m_i_p_value=-1;

        bool m_multiple_base_phenotypes=false;
        bool m_remove_mhc=false;
        bool m_use_beta=false;
        size_t m_thread=1;
};

#endif // COMMANDER_H
