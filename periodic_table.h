#ifndef PERIODIC_TABLE_PERIODIC_TABLE_H
#define PERIODIC_TABLE_PERIODIC_TABLE_H

#include <float.h>

/**
 * A block of the periodic table is a set of elements unified by the atomic orbitals their
 * valence electrons or vacancies lie in.
 */
typedef enum {
    S_BLOCK,
    P_BLOCK,
    D_BLOCK,
    F_BLOCK,
} periodic_table_block_t;

/**
 * A state of matter is one of the distinct forms in which matter can exist.
 */
typedef enum {
    /**
     * In a solid, constituent particles (ions, atoms, or molecules) are closely packed together.
     * The forces between particles are so strong that the particles cannot move freely but can only vibrate.
     * As a result, a solid has a stable, definite shape, and a definite volume.
     * Solids can only change their shape by an outside force, as when broken or cut.
     */
    SOLID,

    /**
     * A liquid is a nearly incompressible fluid that conforms to the shape of its container but
     * retains a (nearly) constant volume independent of pressure. The volume is definite if the
     * temperature and pressure are constant. When a solid is heated above its melting point,
     * it becomes liquid, given that the pressure is higher than the triple point of the substance.
     * Intermolecular forces are still important, but the molecules have enough energy to move
     * relative to each other and the structure is mobile. This means that the shape of a liquid is
     * not definite but is determined by its container.
     */
    LIQUID,

    /**
     * A gas is a compressible fluid. Not only will a gas conform to the shape of its container but
     * it will also expand to fill the container.
     *
     * In a gas, the molecules have enough kinetic energy so that the effect of intermolecular forces is
     * small (or zero for an ideal gas), and the typical distance between neighboring molecules is much
     * greater than the molecular size. A gas has no definite shape or volume, but occupies the entire
     * container in which it is confined. A liquid may be converted to a gas by heating at constant pressure
     * to the boiling point, or else by reducing the pressure at constant temperature.
     */
    GAS,
} periodic_table_phase_t;

typedef struct {
    unsigned char atomic_number;

    const char *symbol;
    const char *name;

    unsigned char group;
    unsigned char period;

    double atomic_weight;

    unsigned char protons;
    unsigned char neutrons;
    unsigned char electrons;

    double melting_point;
    double boiling_point;

    double density;

    double electronegativity;

    periodic_table_block_t block;
    periodic_table_phase_t phase;
} periodic_table_element_t;

const static periodic_table_element_t hydrogen = {
        .atomic_number = 1,

        .symbol = "H",
        .name = "Hydrogen",

        .group = 1,
        .period = 1,

        .atomic_weight = 1.0080,

        .protons = 1,
        .neutrons = 0,
        .electrons = 1,

        .melting_point = 14.01,
        .boiling_point = 20.28,

        .density = 0.00008988,

        .electronegativity = 2.20,

        .block = S_BLOCK,
        .phase = GAS,
};

const static periodic_table_element_t helium = {
        .atomic_number = 2,

        .symbol = "He",
        .name = "Helium",

        .group = 18,
        .period = 1,

        .atomic_weight = 4.0026,

        .protons = 2,
        .neutrons = 2,
        .electrons = 2,

        .melting_point = DBL_MAX,
        .boiling_point = 4.22,

        .density = 0.0001785,

        .electronegativity = DBL_MAX,

        .block = S_BLOCK,
        .phase = GAS,
};

const static periodic_table_element_t lithium = {
        .atomic_number = 3,

        .symbol = "Li",
        .name = "Lithium",

        .group = 1,
        .period = 2,

        .atomic_weight = 6.94,

        .protons = 3,
        .neutrons = 4,
        .electrons = 3,

        .melting_point = 453.69,
        .boiling_point = 1560,

        .density = 0.534,

        .electronegativity = 0.98,

        .block = S_BLOCK,
        .phase = SOLID,
};

const static periodic_table_element_t beryllium = {
        .atomic_number = 4,

        .symbol = "Be",
        .name = "Beryllium",

        .group = 2,
        .period = 2,

        .atomic_weight = 9.0122,

        .protons = 4,
        .neutrons = 5,
        .electrons = 4,

        .melting_point = 1560,
        .boiling_point = 2742,

        .density = 1.85,

        .electronegativity = 1.57,

        .block = S_BLOCK,
        .phase = SOLID,
};

const static periodic_table_element_t boron = {
        .atomic_number = 5,

        .symbol = "B",
        .name = "Boron",

        .group = 13,
        .period = 2,

        .atomic_weight = 10.81,

        .protons = 5,
        .neutrons = 6,
        .electrons = 5,

        .melting_point = 2349,
        .boiling_point = 4200,

        .density = 2.34,

        .electronegativity = 2.04,

        .block = P_BLOCK,
        .phase = SOLID,
};

const static periodic_table_element_t carbon = {
        .atomic_number = 6,

        .symbol = "C",
        .name = "Carbon",

        .group = 14,
        .period = 2,

        .atomic_weight = 12.011,

        .protons = 6,
        .neutrons = 6,
        .electrons = 6,

        .melting_point = 4000,
        .boiling_point = 4300,

        .density = 2.267,

        .electronegativity = 2.55,

        .block = P_BLOCK,
        .phase = SOLID,
};

const static periodic_table_element_t nitrogen = {
        .atomic_number = 7,

        .symbol = "N",
        .name = "Nitrogen",

        .group = 15,
        .period = 2,

        .atomic_weight = 14.007,

        .protons = 7,
        .neutrons = 7,
        .electrons = 7,

        .melting_point = 63.15,
        .boiling_point = 77.36,

        .density = 0.0012506,

        .electronegativity = 3.04,

        .block = P_BLOCK,
        .phase = GAS,
};

const static periodic_table_element_t oxygen = {
        .atomic_number = 8,

        .symbol = "O",
        .name = "Oxygen",

        .group = 16,
        .period = 2,

        .atomic_weight = 15.999,

        .protons = 8,
        .neutrons = 8,
        .electrons = 8,

        .melting_point = 54.36,
        .boiling_point = 90.20,

        .density = 0.001429,

        .electronegativity = 3.44,

        .block = P_BLOCK,
        .phase = GAS,
};

const static periodic_table_element_t fluorine = {
        .atomic_number = 9,

        .symbol = "F",
        .name = "Fluorine",

        .group = 17,
        .period = 2,

        .atomic_weight = 18.998,

        .protons = 9,
        .neutrons = 10,
        .electrons = 9,

        .melting_point = 53.53,
        .boiling_point = 85.03,

        .density = 0.001696,

        .electronegativity = 3.98,

        .block = P_BLOCK,
        .phase = GAS,
};

const static periodic_table_element_t neon = {
        .atomic_number = 10,

        .symbol = "Ne",
        .name = "Neon",

        .group = 18,
        .period = 2,

        .atomic_weight = 20.180,

        .protons = 10,
        .neutrons = 10,
        .electrons = 10,

        .melting_point = 24.56,
        .boiling_point = 27.07,

        .density = 0.0009002,

        .electronegativity = DBL_MAX,

        .block = P_BLOCK,
        .phase = GAS,
};

const static periodic_table_element_t sodium = {
        .atomic_number = 11,

        .symbol = "Na",
        .name = "Sodium",

        .group = 1,
        .period = 3,

        .atomic_weight = 22.990,

        .protons = 11,
        .neutrons = 12,
        .electrons = 11,

        .melting_point = 370.87,
        .boiling_point = 1156,

        .density = 0.968,

        .electronegativity = 0.93,

        .block = S_BLOCK,
        .phase = SOLID,
};

const static periodic_table_element_t magnesium = {
        .atomic_number = 12,

        .symbol = "Mg",
        .name = "Magnesium",

        .group = 2,
        .period = 3,

        .atomic_weight = 24.305,

        .protons = 12,
        .neutrons = 12,
        .electrons = 12,

        .melting_point = 923,
        .boiling_point = 1363,

        .density = 1.738,

        .electronegativity = 1.31,

        .block = S_BLOCK,
        .phase = SOLID,
};

const static periodic_table_element_t aluminium = {
        .atomic_number = 13,

        .symbol = "Al",
        .name = "Aluminium",

        .group = 13,
        .period = 3,

        .atomic_weight = 26.982,

        .protons = 13,
        .neutrons = 14,
        .electrons = 13,

        .melting_point = 933.47,
        .boiling_point = 2792,

        .density = 2.70,

        .electronegativity = 1.61,

        .block = P_BLOCK,
        .phase = SOLID,
};

const static periodic_table_element_t silicon = {
        .atomic_number = 14,

        .symbol = "Si",
        .name = "Silicon",

        .group = 14,
        .period = 3,

        .atomic_weight = 28.085,

        .protons = 14,
        .neutrons = 14,
        .electrons = 14,

        .melting_point = 1687,
        .boiling_point = 3538,

        .density = 2.3290,

        .electronegativity = 1.9,

        .block = P_BLOCK,
        .phase = SOLID,
};

const static periodic_table_element_t phosphorus = {
        .atomic_number = 15,

        .symbol = "P",
        .name = "Phosphorus",

        .group = 15,
        .period = 3,

        .atomic_weight = 30.974,

        .protons = 15,
        .neutrons = 16,
        .electrons = 15,

        .melting_point = 317.30,
        .boiling_point = 550,

        .density = 1.823,

        .electronegativity = 2.19,

        .block = P_BLOCK,
        .phase = SOLID,
};

const static periodic_table_element_t sulfur = {
        .atomic_number = 16,

        .symbol = "S",
        .name = "Sulfur",

        .group = 16,
        .period = 3,

        .atomic_weight = 32.06,

        .protons = 16,
        .neutrons = 16,
        .electrons = 16,

        .melting_point = 388.36,
        .boiling_point = 717.87,

        .density = 2.07,

        .electronegativity = 2.58,

        .block = P_BLOCK,
        .phase = SOLID,
};

const static periodic_table_element_t chlorine = {
        .atomic_number = 17,

        .symbol = "Cl",
        .name = "Chlorine",

        .group = 17,
        .period = 3,

        .atomic_weight = 35.45,

        .protons = 17,
        .neutrons = 18,
        .electrons = 17,

        .melting_point = 171.6,
        .boiling_point = 239.11,

        .density = 0.0032,

        .electronegativity = 3.16,

        .block = P_BLOCK,
        .phase = GAS,
};

const static periodic_table_element_t argon = {
        .atomic_number = 18,

        .symbol = "Ar",
        .name = "Argon",

        .group = 18,
        .period = 3,

        .atomic_weight = 39.95,

        .protons = 18,
        .neutrons = 22,
        .electrons = 18,

        .melting_point = 83.80,
        .boiling_point = 87.30,

        .density = 0.001784,

        .electronegativity = DBL_MAX,

        .block = P_BLOCK,
        .phase = GAS,
};

const static periodic_table_element_t potassium = {
        .atomic_number = 19,

        .symbol = "K",
        .name = "Potassium",

        .group = 1,
        .period = 4,

        .atomic_weight = 39.098,

        .protons = 19,
        .neutrons = 20,
        .electrons = 19,

        .melting_point = 336.53,
        .boiling_point = 1032,

        .density = 0.89,

        .electronegativity = 0.82,

        .block = S_BLOCK,
        .phase = SOLID,
};

const static periodic_table_element_t calcium = {
        .atomic_number = 20,

        .symbol = "Ca",
        .name = "Calcium",

        .group = 2,
        .period = 4,

        .atomic_weight = 40.078,

        .protons = 20,
        .neutrons = 20,
        .electrons = 20,

        .melting_point = 1115,
        .boiling_point = 1757,

        .density = 1.55,

        .electronegativity = 1.00,

        .block = S_BLOCK,
        .phase = SOLID,
};

const static periodic_table_element_t scandium = {
        .atomic_number = 21,

        .symbol = "Sc",
        .name = "Scandium",

        .group = 3,
        .period = 4,

        .atomic_weight = 44.956,

        .protons = 21,
        .neutrons = 24,
        .electrons = 21,

        .melting_point = 1814,
        .boiling_point = 3109,

        .density = 2.985,

        .electronegativity = 1.36,

        .block = D_BLOCK,
        .phase = SOLID,
};

const static periodic_table_element_t titanium = {
        .atomic_number = 22,

        .symbol = "Ti",
        .name = "Titanium",

        .group = 4,
        .period = 4,

        .atomic_weight = 47.867,

        .protons = 22,
        .neutrons = 26,
        .electrons = 22,

        .melting_point = 1941,
        .boiling_point = 3560,

        .density = 4.506,

        .electronegativity = 1.54,

        .block = D_BLOCK,
        .phase = SOLID,
};

const static periodic_table_element_t vanadium = {
        .atomic_number = 23,

        .symbol = "V",
        .name = "Vanadium",

        .group = 5,
        .period = 4,

        .atomic_weight = 50.942,

        .protons = 23,
        .neutrons = 28,
        .electrons = 23,

        .melting_point = 2183,
        .boiling_point = 3680,

        .density = 6.11,

        .electronegativity = 1.63,

        .block = D_BLOCK,
        .phase = SOLID,
};

const static periodic_table_element_t chromium = {
        .atomic_number = 24,

        .symbol = "Cr",
        .name = "Chromium",

        .group = 6,
        .period = 4,

        .atomic_weight = 51.996,

        .protons = 24,
        .neutrons = 28,
        .electrons = 24,

        .melting_point = 2180,
        .boiling_point = 2944,

        .density = 7.15,

        .electronegativity = 1.66,

        .block = D_BLOCK,
        .phase = SOLID,
};

#endif /* PERIODIC_TABLE_PERIODIC_TABLE_H */
